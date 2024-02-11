#include <iostream>

using namespace std;

int main()
{
  int a,b, temp ;

  cout << "Please enter the value of a & b : " << endl;
  cin >> a >> b;
  cout << "a :" << a <<endl;
  cout << "b :" << b << endl;

  temp = a;
  a=b ;
  b= temp ;
  cout << "a : " << a << ",b : " << b << endl;
    return 0;
}
