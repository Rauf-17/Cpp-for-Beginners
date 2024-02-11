
#include <iostream>

using namespace std;

void avgArray(int array[5], int n)
{

    for(int i=0; i<n;i++)

    cout<<"the array["<<i<<"] is"<<array[i]<<endl;
    int i, sum = 0;

    double avg;

    for (i = 0; i < n; ++i)
{
    sum += array[i];
}
    avg = double(sum) / n; cout<<"average of array elements is: "<<avg;
    }
int main()
{

    int n;

    cout<<"Please enter the size of the array "<<endl;

    cin>>n; int array[n];

    for(int i=0; i<n;i++)
{
    cout<<"Enter array["<<i<<"] element: "<<endl;

    cin>>array[i];
}
    avgArray(array,n);

return 0;
}

