//
// Created by nolasco on 01-02-2019.
//

#include <catch.hpp>
#include <iostream>
#include "../src/Cup.h"
#include "../include/utils.h"

SCENARIO( "A cup pours into another without overflow", "[cup]" ) {
    GIVEN( "A cup and a sink" ) {
        Cup cup = Cup(3);
        Cup sink = Cup(INT_MAX, INT_MAX);

        REQUIRE(cup.getCapacity() == 3);
        REQUIRE(cup.getFilled() == 0);

        WHEN("the cup is poured into the sink") {
            cup.pourInto(sink);

            THEN("the cup empties") {
                REQUIRE(cup.getFilled() == 0);
            }
        }

        WHEN("the cup is poured into the sink") {
            cup.fillFrom(sink);

            THEN("the cup fills up") {
                REQUIRE(cup.getFilled() == 3);
            }
        }
    }

    GIVEN( "Two cups" ) {
        Cup cup1 = Cup(3, 1);
        Cup cup2 = Cup(5, 3);

        WHEN("the second cup pours into the first") {
            cup2.pourInto(cup1);

            THEN("only the free space in the first is filled") {
                REQUIRE(cup1.getFilled() == 3);
                REQUIRE(cup2.getFilled() == 1);
            }
        }

        WHEN("the first cup pours into the second") {
            cup1.pourInto(cup2);

            THEN("only the free space in the first is filled") {
                REQUIRE(cup1.getFilled() == 0);
                REQUIRE(cup2.getFilled() == 4);
            }
        }
    }
}
