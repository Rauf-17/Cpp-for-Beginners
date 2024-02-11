#include <iostream>
#include <stdio.h>

using namespace std;

 class Account {

 private :

    int number;

    double balance;

    char name[30],type[30];

 public :

    void accountname(){

        cout<<"Name : ";
        gets(name);


    }

    void accountnumber(){

        cout<<"Account Number : ";
        cin>>number;
        cin.ignore();
    }

    void accounttype(){

        cout<<"Account Type : ";
        gets(type);
    }

    void accountbalance(){
        cout<<"Balance : ";
        cin >> balance;
    }

    void balanceafterdeposite(){

        int amount;

        cout<<"Deposit Amount : ";
        cin >> amount;

        cout << "Balance Before Depositing : "<<balance<<" Taka"<<endl;
        balance += amount;

        cout << "Balance After Depositing : "<<balance<<" Taka"<<endl;
    }

    void balanceafterwithdraw(){

        int amount;

        cout<<"Withdraw Amount : ";
        cin >> amount;

        cout<< "------------------------"<< endl;

        cout << "Balance Before Withdrawal : "<<balance<<" Taka"<<endl;
        balance -= amount;

        cout<<"Balance After Withdrawal : "<<balance<<" Taka"<<endl;
    }
};


int main()
{
    Account acc;

    acc.accountname();
    acc.accountnumber();
    acc.accounttype();
    acc.accountbalance();
    acc.balanceafterdeposite();
    acc.balanceafterwithdraw();

    return 0;
}
