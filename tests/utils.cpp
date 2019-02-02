//
// Created by nolasco on 01-02-2019.
//

#include <catch.hpp>
#include "../include/utils.h"

SCENARIO( "Clamp function", "[utils]" ) {
    REQUIRE(clamp(2, 0, 3) == 2);
    REQUIRE(clamp(5, 0, 3) == 3);
    REQUIRE(clamp(-2, 0, 3) == 0);
}

SCENARIO( "Max function", "[utils]" ) {
    REQUIRE(max(2, 0) == 2);
    REQUIRE(max(2, -0) == 2);
}

SCENARIO( "Min function", "[utils]" ) {
    REQUIRE(min(2, 0) == 0);
    REQUIRE(min(2, 1) == 1);
}