//
// Created by root on 5/14/18.
//

#ifndef CAPSTONE1_PERSON_H
#define CAPSTONE1_PERSON_H

#include<string>
using namespace std;

class Person {
    public:
        Person(string name);
        virtual void print();

    private:
        string m_name;
};


#endif //CAPSTONE1_PERSON_H
