#include <iostream>
using namespace std;
int main()
{
    //register is used to faster access of any variable
    for (register int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
    return 0;
}
