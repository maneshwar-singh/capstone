//
// Created by root on 5/15/18.
//

#include <iostream>
#include "Person.h"
#include "Student.h"

Student::Student(string name, string m_university) : Person(name), m_university(m_university) {}

void Student::print() {
    std::cout << "University name is" << m_university << std::endl;
}