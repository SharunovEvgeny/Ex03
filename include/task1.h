//
// Created by sharg on 22.09.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const size_t LARGE_SIZE = 1000000;

struct rnd {
    int operator()() {
        return rand() % LARGE_SIZE;
    }
};
int comp( const void* a, const void* b );
#endif //TASK1_TASK1_H
