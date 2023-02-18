//Switch statement
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Guess a number: ";
    cin >> a;
    switch (a)
    {
    case 7:
        cout << "You got it!!!" << endl;
        for (int i = 7; i <= 10; i++)
        {
            cout << i << endl;
        }
        break;
    default:
        cout << "Enter something else!";
    }

    return 0;
}

/*
if('+' == '+')
*/