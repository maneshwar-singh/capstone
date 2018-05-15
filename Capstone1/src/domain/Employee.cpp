//
// Created by root on 5/15/18.
//
#include <iostream>
#include "Person.h"
#include "Employee.h"

using namespace std;

Employee::Employee(string name, string company) : Person(name), m_company(company) {}
void Employee::print() {
    cout << "Company Name is" << m_company <<endl;
}
