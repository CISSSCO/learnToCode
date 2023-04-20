#include <iostream>
using namespace std;

void sum(int num1, int num2)
{
    cout << num1 + num2 << endl;
}

int main()
{
    int a = 5;
    int b = 2;
    sum(a, b); //call by value
    //sum(5, 2);    //call by value
    cout << &a << endl;

        return 0;
}