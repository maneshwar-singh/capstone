//
// Created by root on 5/15/18.
//

#ifndef CAPSTONE1_STACK_H
#define CAPSTONE1_STACK_H


#include "Cell.h"

class Stack {
public:
    Stack();
    void push(int value);
    void pop();
    int top();
    int size() const;
    bool empty() const;

private:
    int m_size;
    Cell* m_firstPtrCell;



};


#endif //CAPSTONE1_STACK_H
