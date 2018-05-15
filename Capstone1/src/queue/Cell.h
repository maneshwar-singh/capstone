//
// Created by root on 5/15/18.
//

#ifndef CAPSTONE1_CELL_H
#define CAPSTONE1_CELL_H


class Cell {

public:
    Cell(int value, Cell* next);
    int value() const {return m_value; };
    Cell* getNext() const {return m_next;};
    void setNext(Cell* next) { m_next = next;};



private:
    int m_value;
    Cell* m_next;
};


#endif //CAPSTONE1_CELL_H
