#include <iostream>
using namespace std;

void printHi5times()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Hii" << endl;
    }
}

int main()
{

    printHi5times();
    cout << "Hello\n";
    printHi5times();
    int a = 5;
    cout << a << endl;
    printHi5times();
    return 0;
}

/*
datatype functionname() {
    //function body
}
*/