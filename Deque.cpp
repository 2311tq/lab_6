#include "Deque.h"
#include <iostream>


void Deque::add(Figure* figure) {
    dq.push(figure);
}

void Deque::print() {
    while (!dq.empty()) {
        dq.front()->draw();
        Sleep(1000);
        std::cout << std::endl;
        dq.pop();
    }
    std::cout << std::endl;
}

void Deque::clear() {
    while (!dq.empty()) {
        delete dq.front();
        Sleep(1000);
        dq.pop();
    }
    std::cout << "Очередь очищена" << std::endl;
}

