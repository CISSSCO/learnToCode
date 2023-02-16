#include <iostream>
using namespace std;
int z = 10; //global variable

void printz()
{
    cout << z << endl;
}

//created a print function
void print()
{
    int a = 12; //local variable
    if (true)
    {
        int i = 11; //local to this if condition
        //you cannot use i outside this if condition
        cout << i << endl;
    }
}
