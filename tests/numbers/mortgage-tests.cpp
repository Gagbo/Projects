#include "catch.hpp"
#include "mortgage.h"

TEST_CASE("Mortgage tests", "[numbers][mortgage]") {
    REQUIRE(numbers::calculate_payment_for_terms(4000, 0.0015, 36) ==
            Approx(114.22));
}
