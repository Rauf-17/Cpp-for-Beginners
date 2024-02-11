#include <iostream>

using namespace std;

int main()
{
    int digit, right_digit ;
    cout<< "Enter the digit : "<<endl;
    cin >> digit;

    cout<< "Reverse digit" << endl;

    while (digit>0){
        right_digit = digit% 10 ;
        cout<< right_digit <<endl;
        digit = digit/10;
    }
    return 0;
}

