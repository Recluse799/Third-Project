/*
* Immanuel Braxton
* 10/23/2024
* Discription: This program will ask user to input the current price of an item and its price one year and two years ago.
* This program will calculate the inflation rate for two successive years, and determine whether the inflation
* trend is increasing or decreasing. Then, this function will output the two inflation rates calculated, and its 
* trend prior to going back to the main function and terminating. ".
*/


// Third project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iomanip> //includes manipulators (that take parameters, strings are left justified, numbers are right justified)

//#include <string>


using namespace std;

const double pi = 3.1416;// definition of pi by professor
// precondition : main function will provide perameters and called by calradius
//  posconditions: distence is returned to calradius.
double calcDistance(double x1, double y1, double x2, double y2); 

// precondition : main function will provide perameters it will call call calcDistance and calradius  
//  posconditions: will rename distance radius and give cout radius and send to main as a reference value.
void calcRadius(double x1, double y1, double x2, double y2, double& radius);

// precondition : called by main function and the main function will provide reference values - radius
// posconditions: Will calculate area and c out the area.
void calcArea(double nubx1, double nuby1, double nubx2, double nuby2, double rad);

// precondition : Is called by the main function and the main function provides the refernce value.
// posconditions: Will calculate the circumference and c out the circumference.
void calcCircumference(double nux1, double nuy1, double nux2, double nuy2, double radi);

int main()
{
    
        double numx1, numy1, numx2, numy2, r;

        cout << " Please, enter input the center coordinates of the first point (x1 y1) in the cartesian plane separated by a space: ";
        cin >> numx1 >> numy1;

        cout << "Enter the circumference coordinates of the second point (x2 y2) in the cartesian plane separated by a space: ";
        cin >> numx2 >> numy2;

        calcRadius (numx1, numy1,numx2, numy2,r);

        calcCircumference (numx1,numy1, numx2, numy2, r);

        calcArea (numx1,numy1, numx2, numy2, r);
        

        return 0;

}


void calcArea(double nubx1, double nuby1, double nubx2, double nuby2, double rad)
{
    double area = pi * rad * rad;
    cout << "The area of the circle is: " << endl;
    cout << fixed << showpoint << setprecision(2) << setw(4) << area << endl;
}

void calcCircumference(double nux1, double nuy1, double nux2, double nuy2, double radi)
{
    double circumference = 2 *pi * radi;
    cout << "The circumference of the circle is: " << endl;
    cout << fixed << showpoint << setprecision(2) << setw(4) << circumference << endl;
}


void calcRadius(double x1, double y1, double x2, double y2, double& radius)
{
   
    radius = calcDistance(x1, y1, x2, y2); 

    cout << "The radius between the points is: " << endl;
    cout << fixed << showpoint << setprecision(2) << setw(4) << radius << endl;
}


double calcDistance(double x1, double y1, double x2, double y2)
{
    
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
   
    

    //cout << "The distance between the points (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is: " << endl;
    //cout << fixed << showpoint << setprecision(2) << setw(4) << distance << endl;
}

