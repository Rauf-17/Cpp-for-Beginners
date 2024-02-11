#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int a = 100, b = 2, c = 25, d = 4, result;
    result = a-b;
    cout<< "a-b = " << result << endl;
    result = b*c ;
    cout << "b*c = " << result << endl;
    result = a/c ;
    cout << "a/c = " << result << endl;
    result = a+b*c;
    cout << "a+b*c = " << result << endl;
    return 0;
}
