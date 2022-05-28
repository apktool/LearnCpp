#!/usr/bin/env bash

bin=$(dirname "${BASH_SOURCE-$0}")
bin=$(
  cd "$bin" >/dev/null || exit
  pwd
)
cd "$bin/.." || exit

readonly ROOT_PATH=$(pwd)
readonly BUILD_PATH=${ROOT_PATH}/build

#######################################
# Build target from the build directory.
# Globals:
#   None
# Arguments:
#   None
#######################################
function compile() {
  cmake -S "${ROOT_PATH}" -B "${BUILD_PATH}"

  local compile_dir=(src test)
  for dir in "${compile_dir[@]}"; do
    cd "${BUILD_PATH}/${dir}"
    make
  done
}

#######################################
# Cleanup files from the build directory.
# Globals:
#   None
# Arguments:
#   None
#######################################
function clean() {
  rm -rf "${BUILD_PATH}"
}

"$@"
