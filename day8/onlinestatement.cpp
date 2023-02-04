#include <iostream>
using namespace std;
int main()
{

    int a = 1;
    if (a < 10)
    {
        cout << a + 1 << endl;
        cout << a + 2 << endl;
        cout << a + 3 << endl;
    }

    if (a < 10)
        cout << a << endl;
    else
        cout << a + 1 << endl;
    return 0;
}