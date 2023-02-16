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
        cout << i << endl;
    }
}

int main()
{
    int a = 5; //local variable
    cout << a << endl;
    cout << z << endl;
    print(); //called print function
    printz();
    return 0;
}