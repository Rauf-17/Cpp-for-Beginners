#include <iostream>

using namespace std;

int main()
{
    int a,b,Max;
    cout<< "Enter the value of a"<<endl;
    cin>>a;
    cout << "Enter the value of b"<<endl;
    cin>>b;
    Max = (a<b)? b:a;
    cout<<"Max number is "<< Max <<endl;
    return 0;
}
