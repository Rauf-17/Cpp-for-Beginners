#include <iostream>

using namespace std;

    class journeyDetails{

    protected : journeyDetails ();

    string travelDate ;
    string travelTo ;
    string travelFrom ;
    int distance ;

    public : journeyDetails () ;
     string setTravelDate(string date) ;{//set travel date}
     string setTravelTo(string trTo) ;{//set destination to    }
     string setTravelFrom(string tfFr) ;{// set destination from}
     int setDistance(int d) ;{// set distance    }
     void showJourneyDetails(){//show journey details}




};


   int main()
{

    return 0;
}
