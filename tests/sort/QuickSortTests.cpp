
//
// Created by Oluwatobi Adeyinka on 2019-02-14.
//

#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file per test

#include "src/sort/SortingAlgorithm.h"
#include "src/sort/SortingAlgorithm.cpp"
#include "src/sort/quick/QuickSort.h"
#include "src/sort/quick/QuickSort.cpp"
#include "lib/external/Catch/include/catch.hpp"

TEST_CASE("Quick sort on array", "[QuickSortTests]") {
  const int arraySize = 10;
  int data[arraySize] = {500, 1, 100, 2, 30, 12, 8, 13, 21, 34};

  QuickSort<int> quickSort = QuickSort<int>();
  REQUIRE(quickSort.arrayIsSorted(quickSort.sortArrayRecursively(data, arraySize), arraySize));
}
