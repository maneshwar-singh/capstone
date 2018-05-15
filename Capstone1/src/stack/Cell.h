//
// Created by root on 5/15/18.
//

#ifndef CAPSTONE1_CELL_H
#define CAPSTONE1_CELL_H


class Cell {
public:
    Cell(int value, Cell* next);
    int value() const{return m_value;}
    Cell* next() const {return m_next;}
private:
    int m_value;
    Cell* m_next;
};


#endif //CAPSTONE1_CELL_H
