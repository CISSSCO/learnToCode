#include <iostream>
using namespace std;
int main()
{

    if (true)
    {
        if (true)
        {
            if (false)
            {
                cout << "3rd if\n";
            }
            else if (false)
            {
                //condition
            }
            else
            {
                cout << "else in 3rd if\n";
            }
        }
        cout << "1st if\n";
    }

    return 0;
}