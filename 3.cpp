#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a,b;
    float result;

    cout << "Enter Pounds: ";
    cin >> a;
    cout << "Enter Ounces: ";
    cin >> b;

    result = (a*0.453592) + (b*0.453592)/16;

    cout << a << " pounds " << b << " ounces = " << fixed << setprecision( 2 ) << result;

}