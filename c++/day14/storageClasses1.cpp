//storage classes
//extern, static, register
#include <iostream>
#include "storageClasses.cpp"
using namespace std;
int main()
{
    extern int z;
    cout << z << endl;
    return 0;
}