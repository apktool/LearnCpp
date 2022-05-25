//
// Created by li on 4/9/22.
//

#include "ArrayDemo.h"

void ArrayDemo::testOneDimArray() {
  int arr1[] = {1, 2, 3, 4};
  for (int i = 0; i < sizeof(arr1) / sizeof(int); ++i) {
    std::cout << arr1[i] << " ";
  }
  std::cout << std::endl;

  int arr2[5];
  for (int i = 0; i < 3; ++i) {
    arr2[i] = i;
  }
  for (auto item : arr2) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
}

void ArrayDemo::testTwoDimArray() {
  int arr1[][3] = {
      {0, 1, 2},
      {3, 4, 5}
  };

  for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); ++i) {
    for (int j = 0; j < sizeof(arr1[i]) / sizeof(arr1[0][0]); ++j) {
      std::cout << arr1[i][j] << " ";
    }
    std::cout << std::endl;
  }

  int arr2[2][3] = {0, 1, 2, 3, 4, 5};

  for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); ++i) {
    for (int j = 0; j < sizeof(arr2[i]) / sizeof(arr2[0][0]); ++j) {
      std::cout << arr2[i][j] << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
}
