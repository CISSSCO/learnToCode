#include <iostream>
using namespace std;
int main()
{

    char a = 'A';
    char b = '1';
    char c = 'a';

    int arr[5] = {1, 2, 3, 4, 5};
    float arr2[5] = {1.2, 2.3, 3.2, 4.2, 1.6};
    char name[6] = {'c', 'i', 's', 'c', 'o', '\0'};
    char name2[6] = "cisco";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << name[i];
    // }
    cout << &name2 << endl;
    cout << &name << endl;
    cout << arr << endl;
    cout << arr2 << endl;
    cout << name[0] << endl;
    cout << name[1] << endl;
    cout << name[3] << endl;
    cout << name2[0] << endl;
    cout << name2[1] << endl;
    cout << name2[3] << endl;
    cout << name[5];
    return 0;
}