//storage classes
//extern, static, register
#include <iostream>
#include "storageClasses.cpp"
using namespace std;

void printTable()
{
    static int a = 1;
    cout << a << endl;
    a++;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printTable();
    }
    return 0;
}