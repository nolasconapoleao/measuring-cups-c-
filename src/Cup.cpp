//
// Created by nolasco on 01-02-2019.
//

#include <iostream>
#include "Cup.h"
#include "../include/utils.h"

Cup::Cup(const int capacity, int filled)
    : capacity(capacity)
    ,filled(filled)
{}

const int Cup::getCapacity() const {
    return capacity;
}

int Cup::getFilled() const {
    return filled;
}

void Cup::fillFrom(Cup &cup) {
    if(cup.getCapacity() == INT_MAX && cup.getFilled() == INT_MAX) {
        this->filled = this->capacity;
        std::cout << std::endl;
    } else {
        int tipVolume = min(cup.filled, cup.capacity - cup.filled);

        this->filled += tipVolume;
        cup.filled -= tipVolume;
    }
}

void Cup::pourInto(Cup &cup) {
    cup.fillFrom(*this);
}

std::ostream &operator<<(std::ostream &os, const Cup &cup) {
    os << "A cup with capacity: " << cup.capacity << " filled: " << cup.filled;
    return os;
}
