#include <iostream>
using namespace std;

int getinput()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

double getDouble()
{
    double num;
    cout << "Enter decimal value: ";
    cin >> num;
    return num;
}

int main()
{

    int a = getinput();
    //int a = 12;
    int b = getinput();
    double c = getDouble();
    double d = getDouble();
    cout << "a = " << a << ", b = " << b << endl;
    cout << a + b;
    cout << "c = " << c << ", d = " << d << endl;
    cout << c + d << endl;

    return 0;
}