#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    cout<< "The Info About The Student : "<< endl;

    Student obj1("Raufull Islam Rauf" , "CSE" , "21-45579-3" ,"2021") ;
    obj1.Student_Info ();

    Student obj2("Ovi", "CSE" , "21-4556-3", "2021") ;
    obj2.Student_Info ();

    Student obj3("Emon" ,"CSE", "21-5859-3" , "2021" ) ;
    obj3.Student_Info ();

    return 0;
}
