#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 3;
    //? - ternary operator
    // (condition) ? statement to be executed if true : statement to be executed if false;
    // (condition) ? true : false;
    //int c = (a > b) ? a : b;
    (a > b) ? cout << a : cout << b;
    return 0;
}