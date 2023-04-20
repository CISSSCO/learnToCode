#include <iostream>
using namespace std;
int main()
{
    int num[11];
    num[0] = 1;
    num[1] = 2;
    num[3] = 5;
    num[2] = 4;
    num[4] = 5;
    num[5] = 6;
    num[6] = 7;
    num[8] = 8;
    num[7] = 9;
    num[9] = 10;
    int size = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << endl;
    }
    cout << num << endl;
    cout << &num[0];
    return 0;
}