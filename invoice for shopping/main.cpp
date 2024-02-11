#include <iostream>
#include <stdio.h>

using namespace std;

  class Product {

 private :

    int pronum,qty;

    char proname[40];

    double price,tax,discount;

 public :

    void setproname(){

        cout<<"Product Name :";
        gets(proname);

    }
    void setpronumber(){

        cout<<"Product Number :";
        cin >> pronum;

    }
    void setquantity(){

        cout<<"Quantity :";
        cin >> qty;

    }
    void setproprice(){

        cout<<"Price :";
        cin >> price;

    }
    void setTax(){

        cout<<"Tax :";
        cin >> tax;

    }
    void setdiscount(){

        cout<<"Discount :";
        cin >> discount;

    }
    void calculateprc(){

        price = price*qty;
        price -= ((discount/100)*price);
        price += price + ((tax/100)*price);

        cout<<"Total Price :"<<price<<" Taka"<<endl;
    }
    void getinvoice(){

        cout<<"Invoice :"<<endl;

        cout<<"Product Name :"<<proname<<endl;

        cout<<"Product Number :"<<pronum<<endl;

        cout<<"Price :"<<price<<" Taka"<<endl;

        cout<<"Quantity :"<<qty<<" Pieces"<<endl;

        cout<<"Discount :"<<discount<<"%"<<endl;

        cout<<"Tax :"<<tax<<"%"<< endl;
    }
};

int main()
{
    Product rauf;

    rauf.setproname();
    rauf.setpronumber();
    rauf.setproprice();
    rauf.setquantity();
    rauf.setdiscount();
    rauf.setTax();
    rauf.getinvoice();
    rauf.calculateprc();

    return 0;
}
