#include <iostream>
// #include <cstring>
#include <string.h>
using namespace std;
int main()
{

    char name[20];
    cout << "Enter your name: ";
    // cin >> name;
    gets(name);
    cout << "Your name is : " << name << endl;
    cout << strlen(name) << endl;
    return 0;
}