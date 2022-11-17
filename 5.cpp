#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1,num2,num3;
    float average;

    cout << "Please Enter 3 Numbers: ";
    cin >> num1 >> num2 >> num3;

    average = (num1 + num2 + num3)/3;

    cout << "Average = " << fixed << setprecision(2) << average;
}