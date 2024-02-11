#include <iostream>

using namespace std;

int main()
{
    int x,y,z=0;
    cout<<"Enter the Size : ";
    cin >> x;
    int array[x];
    for(int i=0;i<x;i++){
        cout<<"Enter the Number : ";
        cin >> array[i];
    }
    for(int i=0;i<x;i++){
        cout<<"Number "<<i+1<<" : "<<array[i]<<endl;
    }
    cout<<"Enter the number : ";
    cin >> y;
    for(int i=0;i<x;i++){
        if(y == array[i]){
            z += 1;
            cout<<"Index : "<<i<<endl;
        }
        else{
            continue;
        }
    }
    if(z == 0){
        cout<<"No match!"<<endl;
    }
    else{
        cout<<"Found "<<z<<" times"<<endl;
    }

    return 0;
}
