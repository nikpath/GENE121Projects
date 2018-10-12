//Anoushka Pathak
//Assignment 6 Q1
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;
//Function 1: tolerance
bool equalTol (double xValue, double yValue, double tolerance)
{
    if (fabs(xValue-yValue)<tolerance)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Function 2: logarithmic change of base
double logValue (double logNumber, double baseValue)
{
    //logbx = log10x/log10b
    return log(logNumber)/log(baseValue);
}

//Function 3: Convert to radians
double degToRad (double angleDeg)
{
    return angleDeg*(M_PI/180);
}

//Function 4: Cosine law
double otherSideLength (double triangleDeg, double sideLength1, double sideLength2)
{
    return sqrt(pow(sideLength1,2) + (pow(sideLength2,2)) -2*sideLength1*sideLength2*(cos(degToRad(triangleDeg))));
}

int main()
{
    //vairables
    // for function 1
    double xValue = 0, yValue = 0, tolerance = 0;
    // for function 2
    double logNumber = 0, baseValue = 0;
    // for function 3
    double angleDeg = 0;
    //for function 4
    double triangleDeg = 0, sideLength1 = 0, sideLength2 = 0;
    
    //find out which function user wants
    int functionRequest = 0;
    
    cout << "Which math function would you like to use?" << endl;
    cout << "Press 1 for equality check, 2 for logarithmic change of base, 3 for degrees to radian conversion or 4 for cosine law" << endl;
    cin >> functionRequest;
    
    if (functionRequest == 1) //equal value/tolerance
    {
        cout << "Enter two values and a tolerance:" << endl;
        cin >> xValue >> yValue >> tolerance;
        cout << "The two numbers are equal: " << equalTol(xValue, yValue, tolerance) << endl;
    }
    
    if (functionRequest == 2) //log change of base
    {
        do {
            cout << "Enter a number and the base value:" << endl;
            cin >> logNumber >> baseValue;
        } while (logNumber < 0 || baseValue < 0);
        
        cout << "Log base " << baseValue << " of " << logNumber << " is: " << logValue(logNumber, baseValue);
    }
    
    if (functionRequest == 3) //degrees to radian
    {
        do {
            cout << "Enter an angle in degrees:" << endl;
            cin >> angleDeg;
        } while (angleDeg < 0);
        
        cout << "The angle in radians is: " << degToRad(angleDeg);
    }
  
    if (functionRequest == 4) //cosine law
    {
        do {
            cout << "Enter an angle and the lengths of two sides of the triangle:" << endl;
            cin >> triangleDeg >> sideLength1 >> sideLength2;
        } while (triangleDeg < 0 || sideLength1 <= 0 || sideLength2 <= 0);
        
        cout << "The length of the other side of the triangle is: " << otherSideLength(triangleDeg, sideLength1, sideLength2);
    }
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
