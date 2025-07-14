#include <iostream>
#include "student.h"
using namespace std;
int main()
{
    Student s;
    s.variabila2 = 10;
    s.setVariabila1(5);
    cout<< "Sv2 = " << s.variabila2 << endl;
    cout<< "Sv1 = " << s.getVariabila1();
}
