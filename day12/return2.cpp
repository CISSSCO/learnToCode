#include <iostream>
using namespace std;

string getName()
{
    string s;
    cout << "Enter your name: ";
    cin >> s;
    return s;
}

int main()
{
    string name = getName();
    cout << name << endl;
}