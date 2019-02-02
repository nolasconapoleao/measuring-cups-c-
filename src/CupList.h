//
// Created by nolasco on 01-02-2019.
//

#ifndef MEASURING_CUPS_CUPLIST_H
#define MEASURING_CUPS_CUPLIST_H


#include "Cup.h"
#include <vector>

class CupList {
    std::vector<Cup> cups;

public:
    CupList();

    void addCup(Cup&);
    Cup& getCup(int);
    int length();
    void show();
    void iterate();
};


#endif //MEASURING_CUPS_CUPLIST_H
