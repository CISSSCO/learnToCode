//break and continue
/*
-> break:  skips the whole loop(means come out of the loop)
-> continue: skips the whole statements below it(means continue to next iteration of loop, doen't come out of the for loop)
*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a value: ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        // if (i == 4)
        //     break;
        if (i % 2 != 0) //1 % 2 == 1
        {
            continue;
        }
        cout << i << endl;
    }

    /*
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= a);
    */

    return 0;
}
