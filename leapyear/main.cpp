#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Enter the year" << endl;
    cin>> year;

    if ((( year%4==0)&&(year%100!=0)) || (year%400==0) )
        cout<< "The Year " << year << " is Leap Year"<< endl;
    else
        cout<<"The year " << year << " is not Leap Year" ;
    return 0;
}
