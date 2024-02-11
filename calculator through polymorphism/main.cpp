#include <iostream>

using namespace std;

class Calculator {

    public :

        void calculator(int a,int b){

        cout<< "Addition = " << a+b << endl;

        }

        void calculator(int a, double b) {

        cout<< "Addition = " << a+b << endl;

        }

        void calculator(int a, double b, float c) {

        cout<< "Addition = " << a+b+c << endl;

        }


        void calculator(double a, double b) {

        cout<< "Substraction = " << a-b << endl;

        }


        void calculator(int a, float b) {

        cout<< "Multiplication = " << a*b << endl;

        }


        void calculator(double a, int b) {

        cout<< "Division = " << a/b << endl;

        }

} ;



int main()
{
    Calculator obj ;
    obj.calculator(5,7);
    obj.calculator(6,7.8);
    obj.calculator(7,6.6,7.8);
    obj.calculator(4.5,2.3);
    obj.calculator(5,6.5);
    obj.calculator(35.8,5);
    return 0;
}
