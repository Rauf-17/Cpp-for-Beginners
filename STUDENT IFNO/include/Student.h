#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
    private:
         float CGPA = 3.45;

    public:
        Student(string a, string b, string c ,string d);

        string ID  ;
        string Name ;
        string Department ;
        string  Year ;

        void Student_Info () {

        cout<< "Student's ID :" << ID << endl;
        cout<< "Student's Name :" << Name << endl;
        cout<< "Student's Department :" << Department << endl;
        cout<< "Student's Admit Year :" << Year << endl;

        }


    protected:


};

#endif // STUDENT_H
