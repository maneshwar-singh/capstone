//
// Created by root on 5/15/18.
//
#include<cassert>

#include "Queue.h"
#include "Cell.h"

Queue::Queue(): m_size(0), firstCellPtr(nullptr), lastCellPtr(nullptr) {}

void Queue::enter(int value) {
    Cell* cell = new Cell(value, nullptr);
    if(empty()){
        firstCellPtr = lastCellPtr = cell;

    }else{
        lastCellPtr->setNext(cell);
        lastCellPtr = cell;
    }
    ++m_size;
}

int Queue::first() {
    assert(!empty());
    return firstCellPtr->value();
}

void Queue::remove() {
    assert(!empty());
    Cell* deleteCell = firstCellPtr;

    firstCellPtr = deleteCell->getNext();
    delete deleteCell;
    --m_size;
}

int Queue::size() const {
    return m_size;
}

bool Queue::empty() const {
    return (firstCellPtr == nullptr);
}