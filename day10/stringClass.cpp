#include <iostream>
// #include <cstring>
using namespace std;
int main()
{
    string name;
    cout << "Enter you name: ";
    // cin >> name;
    // gets(name);      //This will not work in string
    getline(cin, name);
    cout << "Your name is : " << name << endl;
    cout << name[5] << endl;
    cout << name[2] << endl;
    cout << name.length() << endl;

    for (int i = 0; i < name.length(); i++)
    {
        cout << name[i] << endl;
    }

    return 0;
}