//
// Created by Oluwatobi Adeyinka on 2019-02-14.
//

#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file per test

#include "src/sort/SortingAlgorithm.h"
#include "src/sort/SortingAlgorithm.cpp"
#include "src/sort/selection/SelectionSort.h"
#include "src/sort/selection/SelectionSort.cpp"
#include "lib/external/Catch/include/catch.hpp"

TEST_CASE("Selection sort on array", "[SelectionSortTests]") {
  const int arraySize = 10;
  int data[arraySize] = {500, 1, 100, 2, 30, 12, 8, 13, 21, 34};

  SelectionSort<int> selectionSort = SelectionSort<int>();
  REQUIRE(selectionSort.arrayIsSorted(selectionSort.sortArray(data, arraySize), arraySize));
}