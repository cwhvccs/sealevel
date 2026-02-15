/*

Code File Name: sealevel.cpp

Programmer: CWH
Due Date: 2/15/26

Requirements: Calculate the rise in sea level after X amount of years.

*/

#include <iostream>
using namespace std;

int main()
{
    double years;
    cout << "How many years will pass? \n";
    cin >> years;
    double mmhigher = years * 1.5;
    cout << "The ocean level will be " << mmhigher << " milimeters higher in " << years << " years.\n";
}