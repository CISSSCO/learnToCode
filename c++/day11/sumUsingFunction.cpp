#include <iostream>
using namespace std;

void sum(int num1, int num2)
{
    cout << num1 + num2 << endl;
}

int main()
{
    int a;
    int b;
    cout << "Enter two number: ";
    cin >> a >> b;
    sum(a, b);
    sum(11, 2);

    int c = 5;
    int d = 1;
    sum(c, d);

    return 0;
}

/*
datatype functionname() {
    //function body
}
*/