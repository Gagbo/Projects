#include "catch.hpp"
#include "fibonacci.h"

TEST_CASE("Simple Fibonacci values", "[numbers][fibonacci]") {
  REQUIRE(numbers::fibonacciFast(0) == 0);
  REQUIRE(numbers::fibonacciFast(1) == 1);
}
