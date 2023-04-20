#include <iostream>
using namespace std;

void changeAB(int *num1, int *num2)
{
    int i, j;
    cout << "Enter two number: ";
    cin >> i >> j;
    *num1 = i;
    *num2 = j;
    cout << *num1 << " " << *num2 << endl;
}

int main()
{
    int a = 5;
    int b = 2;

    cout << a << " " << b << endl;
    changeAB(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}