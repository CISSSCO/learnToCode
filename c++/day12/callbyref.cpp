#include <iostream>
using namespace std;

void sum(int num1, int num2)
{
    cout << num1 + num2 << endl;
}

void sumWithRef(int *num1, int *num2)
{
    //int *num1 = &a;
    //int *num2 = &b;
    cout << *num1 + *num2 << endl;
}

int main()
{
    int a = 5;
    int b = 2;
    sum(a, b); //call by value

    sumWithRef(&a, &b); //call by reference

    return 0;
}