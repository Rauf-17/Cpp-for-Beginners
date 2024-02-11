#include <iostream>

using namespace std;

int main()
{
    int numbers [5] , i ;

    cout << "Enter the numbers :"<< endl;

    for (i=0; i<5; i++ ) {
        cin>> numbers [i] ;

    }

    for ( i=0 ;i<5 ;i++) {
        if(numbers [i]%2==0) {
            cout << "The number " << numbers [i] << " is Even! " << endl;
        }
        else {
            cout << "The number " << numbers [i] << " is Odd! " << endl;
        }
    }
    return 0;
}
