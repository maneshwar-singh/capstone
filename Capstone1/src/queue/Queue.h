//
// Created by root on 5/15/18.
//

#ifndef CAPSTONE1_QUEUE_H
#define CAPSTONE1_QUEUE_H
#include "Cell.h"

class Queue {
public:
    Queue();
    int first();
    void enter(int value);
    void remove();
    int size() const;
    bool empty() const;
private:
    int m_size;
    Cell* firstCellPtr;
    Cell* lastCellPtr;

};


#endif //CAPSTONE1_QUEUE_H
