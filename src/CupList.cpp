//
// Created by nolasco on 01-02-2019.
//

#include <iostream>
#include "CupList.h"
#include "../include/utils.h"

CupList::CupList() {
    Cup sink = Cup(INT_MAX, INT_MAX);
    cups.push_back(sink);
}

void CupList::addCup(Cup &cup) {
    cups.push_back(cup);
}

Cup &CupList::getCup(int index) {
    return cups.at(index);
}

int CupList::length() {
    return cups.size();
}

void CupList::show() {
    for(Cup cup : cups) {
        std::cout << cup << std::endl;
    }
}

void CupList::iterate() {
    for(auto it=cups.begin(); it != cups.end(); it++) {
        for(auto it2=it; it2 != cups.end(); it2++) {
            if(it == it2) {
                std::next(it2, 1);
            }

            (*it).pourInto(*it2);
            (*it2).pourInto(*it);
        }
    }
}
