//
// Created by nolasco on 01-02-2019.
//

#include <catch.hpp>
#include <iostream>
#include "../src/CupList.h"

SCENARIO( "A list of cups is updated", "[cup]" ) {
    GIVEN( "A cuplist with two cups" ) {
        CupList cupList = CupList();
        Cup cup1 = Cup(5);
        Cup cup2 = Cup(3);

        cupList.addCup(cup1);
        cupList.addCup(cup2);


        REQUIRE(cupList.length() == 3);

        WHEN("a new cup is added") {
            Cup cup3 = Cup(7);
            cupList.addCup(cup3);

            THEN("the size of the list goes up by one") {
                REQUIRE(cupList.length() == 4);
            }
        }
    }
}

SCENARIO( "Iterate through cups", "[cup]" ) {
    GIVEN( "A cuplist with two cups" ) {
        CupList cupList = CupList();
        Cup cup1 = Cup(5);
        Cup cup2 = Cup(3);

        cupList.addCup(cup1);
        cupList.addCup(cup2);

        REQUIRE(cupList.length() == 3);

        WHEN("a new cup is added") {
            cupList.iterate();

            THEN("the size of the list goes up by one") {
                REQUIRE(cupList.length() == 3);
                cupList.show();
            }
        }
    }
}
