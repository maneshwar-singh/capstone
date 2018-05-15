//
// Created by root on 5/15/18.
//

#ifndef CAPSTONE1_STUDENT_H
#define CAPSTONE1_STUDENT_H


#include "Person.h"

class Student : public Person {

private:
    string m_university;
public:
    Student(string name, string m_university);
    void print();
};


#endif //CAPSTONE1_STUDENT_H
