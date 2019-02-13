//
// Created by Oluwatobi Adeyinka on 2019-02-13.
//

#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file per test

#include "src/models/node/Node.h"
#include "src/models/node/Node.cpp"
#include "lib/external/Catch/include/catch.hpp"

TEST_CASE("New Node test", "[NodeTests]") {
  Node<int> node = Node<int>(15);
  REQUIRE(node.getData() == 15);
  REQUIRE(node.getNextNode() == NULL);
}