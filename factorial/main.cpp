#include <iostream>

using namespace std;


    void fact(int n){
    int result = 1;
    for(int i = n; i>0;i--){
        result= result*i;
    }

    cout<<"Factorial = "<<result<< endl;
}



int main()
{

    int num;
    cin >> num;
    fact(num);

    return 0;
}
