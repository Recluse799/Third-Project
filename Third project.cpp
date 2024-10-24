// Functions and Parameters Project II.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Immanuel Braxton
4 / 20 / 2024
TThis program will ask user to input the current price of an item and its price one year and two years ago.
This program will calculate the inflation rate for two successive years, and determine whether the inflation
trend is increasing or decreasing. Then, this function will output the two inflation rates calculated, and its
trend prior to going back to the main function and terminating. ".

*/



#include <iostream> 

#include <iomanip> //includes manipulators (that take parameters, strings are left justified, numbers are right justified)

//#include <string>  // not used

//#include <cmath> // 

//#include <fstream> // not used fstream header



using namespace std;



// precondition :  called by main, and send  current price, one year ago price, and two year ago price, and initial value for inflation rate 1 and 2
//  posconditions: cill calculate infr1 and infr2 from current price, one year ago price, and two year ago price, changing inflration rates send to as ref to main
void calcInflation(double num0, double num1, double num2, double& infr1, double& infr2); // Function prototype for calculating inflation rate

// precondition : called by main, nothing given
// posconditions: will ask for current price, one year ago price, and two year ago price, send parameters to main as reference
void getPrices(double& numx1, double& numx2, double& nunx3);

// precondition : Is called by main, recieves current price, one year ago price, and two year ago price, and new values for rate1 and rate2
// posconditions: Will display the calculated rate1 and rate2, and whether the inflaton rate is increasing or decreasing.  
void displayResults(double nux1, double nux2, double nux3, double rate1, double rate2); // Function prototype for determining inflation trend

int main()
{

    double currrentprice, oneyragoprice, twoyragoprice, infrate1, infrate2; // input from user
    currrentprice = 0;
    oneyragoprice = 0;
    twoyragoprice = 0;
    infrate1 = 0;
    infrate2 = 0;



    getPrices(currrentprice, oneyragoprice, twoyragoprice);

    calcInflation(currrentprice, oneyragoprice, twoyragoprice, infrate1, infrate2);

    displayResults(currrentprice, oneyragoprice, twoyragoprice, infrate1, infrate2); // Determine the trend of inflation


    return 0;

}


void getPrices(double& numx1, double& numx2, double& nunx3)
{
    cout << " Please, enter the current price of the item : ";
    cin >> numx1;

    cout << " Please, enter the price of the item one year ago: ";
    cin >> numx2;

    cout << " Please, enter the price of the item two years ago : ";
    cin >> nunx3;

}

void calcInflation(double num0, double num1, double num2, double& infr1, double& infr2) // Function definition for calculating inflation rate
{
    infr1 = 0;
    infr2 = 0;

    infr1 = (num0 - num1) / num1;

    infr2 = (num1 - num2) / num2;
}


void displayResults(double nux1, double nux2, double nux3, double rate1, double rate2) // Function definition for determining inflation trend
{
    cout << fixed << showpoint << setprecision(2) << setw(4) << endl;
    cout << "The inflation rate for the current year and one year ago is: " << rate1 << endl;
    cout << "The inflation rate for one year ago and two years ago is: " << rate2 << endl;

    if (rate1 > 0 && rate1 > rate2)
    {
        cout << "The inflation trend is increasing." << endl;
    }
    else if (rate1 > 0 && rate1 < rate2)
    {
        cout << "The inflation trend is still inflating." << endl;
    }
    else if (rate1 < rate2)
    {
        cout << "The inflation trend is decreasing." << endl;
    }
    else
    {
        cout << "The inflation rates are the same for both years." << endl;
    }
    //cout << fixed << showpoint << setprecision(2) << setw(4) << circumference << endl;
   // cout << "The inflation rate for the current year and one year ago is: " << rate1 << endl;
   // cout << "The inflation rate for the current year and one year ago is: " << rate1 << endl;

}