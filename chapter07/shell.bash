#!/usr/bin/env bash

bin=$(dirname "${BASH_SOURCE-$0}")
bin=$(
  cd "$bin" >/dev/null || exit
  pwd
)
cd "$bin" || exit

function init() {
   docker build -t learn-cpp:v1 docker
}

"$@"