#include <iostream>
#include<ctime>
#include<cstdlib>
#include "src/util/complex.h"
#include "src/domain/Person.h"
#include "src/domain/Student.h"
#include "src/domain/Employee.h"
#include "src/stack/Stack.h"
#include "src/queue/Queue.h"

using namespace std;

int main() {

//    complex z(3.5,2.0);
//
//    cout << "z is ("<<z.getR()<<","<<z.getI() <<") \n" << endl;
//
//    complex cz = 7.5;
//    z = cz;
//    cout << "z is ("<<z.getR()<<","<<z.getI() <<") \n" << endl;
//
//    srand((int) time(nullptr));
//    int dice = (rand() % 6) + 1 ;
//    cout << "Dice: " << dice << endl;

//    Person monica("Monika");
//
//    Student ellie("Manu", "TU Darmstadt");
//
//    Employee donald("Donald", "Google inc");
//
//    //monica.print();
//    //ellie.print();
//    //donald.print();
//
//
//    Person* ptrPerson = &monica;
//    ptrPerson->print();
//
//    ptrPerson = &ellie;
//    ptrPerson->print();
//
//    ptrPerson = &donald;
//    ptrPerson->print();


//    Stack s;
//    s.push(10);
//    s.push(22);
//    s.push(34);
//
//    cout << "top: " <<s.top() << " , size:" <<s.size() << ", is empty: " << (s.empty() ? "true": "false") << endl;
//
//    s.pop();
//    s.push(4);
//    s.pop();
//    cout << "top: " <<s.top() << " , size:" <<s.size() << ", is empty: " << (s.empty() ? "true": "false") << endl;


    Queue q;
    q.enter(21);
    q.enter(34);
    q.enter(45);
    cout << "top: " <<q.first() << " , size:" <<q.size() << ", is empty: " << (q.empty() ? "true": "false") << endl;
    q.remove();
    q.remove();
    q.enter(3);
    q.enter(77);
    q.remove();
    q.enter(299);
    cout << "top: " <<q.first() << " , size:" <<q.size() << ", is empty: " << (q.empty() ? "true": "false") << endl;


    return 0;
}