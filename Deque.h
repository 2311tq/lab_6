#pragma once
#include <iostream>
#include <queue>
#include "Figure.h"

class Deque {
protected:
    std::queue<Figure*> dq;
public:
    Deque() {}
    void add(Figure* figure);
    void print();
    void clear();
};


