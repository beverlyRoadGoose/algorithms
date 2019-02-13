//
// Created by Oluwatobi Adeyinka on 2019-02-13.
//

#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file per test

#include "src/util/ExecutionTimeLogger.h"
#include "src/search/binary/BinarySearch.h"
#include "src/search/binary/BinarySearch.cpp"
#include "lib/external/Catch/include/catch.hpp"

const int arraySize = 10;
int data[arraySize] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
BinarySearch<int> binarySearch = BinarySearch<int>();

TEST_CASE("Binary search test upper half item", "[BinarySearchTests]") {
  std::string processDescription = "Binary search of integer array of 10 items";
  ExecutionTimeLogger executionTimeLogger = ExecutionTimeLogger(processDescription);

  executionTimeLogger.startProcess();
  int result = binarySearch.searchArray(data, arraySize, 21);
  executionTimeLogger.finishProcess();

  REQUIRE(result == 8);
}