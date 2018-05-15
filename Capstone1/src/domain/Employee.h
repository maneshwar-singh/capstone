//
// Created by root on 5/15/18.
//

#ifndef CAPSTONE1_EMPLOYEE_H
#define CAPSTONE1_EMPLOYEE_H

#include "Person.h"


class Employee : public Person {
public:
    Employee(string name, string company);
    void print();
private:
    string m_company;
};


#endif //CAPSTONE1_EMPLOYEE_H
