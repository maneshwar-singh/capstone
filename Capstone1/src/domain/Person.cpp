//
// Created by root on 5/14/18.
//

#include "Person.h"

#include<iostream>
#include<string>

using namespace std;

Person::Person(string name): m_name(name) {

}

void Person::print(){
    cout << "Person " << m_name << endl;
}
