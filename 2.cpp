#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout << "Input Number1: ";
    cin >> num1;

    cout << "Input Number2: ";
    cin >> num2;

    cout << "Summary == " << num1 << " + " << num2 << " = " << num1+num2 << endl;
    cout << "Diffarent == " << num1 << " - " << num2 << " = " << num1-num2 << endl;
    cout << "Multiply == " << num1 << " x " << num2 << " = " << num1*num2 << endl;
    cout << "Summary == " << num1 << " / " << num2 << " = " << num1/num2 << endl;
    cout << "Modulo == " << num1 << " Mod " << num2 << " = " << num1%num2 << endl;

}