//
// Created by root on 5/15/18.
//

#include<cassert>
#include "Stack.h"
#include "Cell.h"

Stack::Stack(): m_firstPtrCell(nullptr), m_size(0){};

void Stack::push(int value) {
    //Creating Space on Heap
    m_firstPtrCell = new Cell(value,m_firstPtrCell);
    ++m_size;
}

void Stack::pop() {
    assert(!empty());
    Cell* deleteCellptr = m_firstPtrCell;
    m_firstPtrCell = m_firstPtrCell->next();
    delete deleteCellptr;
    --m_size;
}

int Stack::top() {
    assert(!empty());
    return m_firstPtrCell->value();
}

int Stack::size() const {
    return m_size;
}
bool Stack::empty() const {
    return (m_firstPtrCell == nullptr);
}