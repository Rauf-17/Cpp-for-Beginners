#include <iostream>

using namespace std;

class Directory {

  protected :

      string personName;
      string dateOfBirth;

  public :

    void setPersonInfo(string pn , string db){

    personName = pn ;
    dateOfBirth = db ;

    }

       void displayInfo1(){

         cout<< "Name : "<< personName<<endl;
         cout<< "Date Of birth : "<< dateOfBirth<<endl ;

    }

};
class NationalDirectory : public Directory {

    protected :

       int personAge;
       string personCity;

    public :

        void setPersonInfos(int age, string city){

        personAge = age ;
        personCity = city ;
        }

        void displayInfo2(){

          cout<< "Age : "<< personAge<<endl; ;
          cout<< "Living City : "<< personCity<<endl;;

        }

};

class LocalDirectory : public NationalDirectory {

    protected :

        string personAddress;
        string personTelNo;
        string personLocalArea;
        double zipCode;

   public :

        void setPersonInfoz(string address, string telNo, string Larea, double zc){

        personAddress = address ;
        personTelNo = telNo ;
        personLocalArea = Larea ;
        zipCode = zc ;

        }

        void displayInfo3() {

          cout<< "Address : " << personAddress<<endl;
          cout<< "Telephone number : "<< personTelNo<<endl ;
          cout<< "Local Area : "<< personLocalArea<<endl;
          cout<< "ZipCode : "<< zipCode<<endl;

        }

};

class Profession : public LocalDirectory {

   protected :

    string personProfession;
    string personInstitution;
    string personGrade;
    double personSalary;

    public :

    void setPersonInfox(string profession, string institution, string grade, double salary){

    personProfession = profession ;
    personInstitution = institution ;
    personGrade = grade ;
    personSalary = salary ;

    }

    void displayInfo4(){

     cout<< "Profession : "<< personProfession<<endl; ;
     cout<< "Institution : "<< personInstitution<<endl;;
     cout<< "Grade : "<< personGrade<<endl;;
     cout<< "Salary : "<< personSalary<<endl;

    }

};

int main()
{
   Profession obj1 ;
   obj1.setPersonInfo("Raufull Islam Rauf" , "17-02-2000");
   obj1.setPersonInfos(21,"Dhaka");
   obj1.setPersonInfoz("Vatara","01875984270","Shahjadpur",1212);
   obj1.setPersonInfox("Student","AIUB","Fresher",0000000);

   obj1.displayInfo1();
   obj1.displayInfo2();
   obj1.displayInfo3();
   obj1.displayInfo4();

   return 0;
}
