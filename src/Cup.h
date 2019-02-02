//
// Created by nolasco on 01-02-2019.
//

#ifndef MEASURING_CUPS_CUP_H
#define MEASURING_CUPS_CUP_H


#include <ostream>

class Cup {
    const int capacity;
    int filled;

public:
    explicit Cup(int capacity, int filled=0);
    const int getCapacity() const;
    int getFilled() const;
    void fillFrom(Cup&);
    void pourInto(Cup&);
    friend std::ostream &operator<<(std::ostream &os, const Cup &cup);
};


#endif //MEASURING_CUPS_CUP_H
