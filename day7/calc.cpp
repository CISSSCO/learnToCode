#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char o;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator: ";
    //+, - , * , / , %
    cin >> o;
    if (o == '+')
    {
        cout << a + b << endl;
    }
    else if (o == '-')
    {
        cout << a - b << "\n";
    }
    else if (o == '*')
    {
        cout << a * b << endl;
    }
    else if (o == '/')
    {
        cout << a / b << endl;
    }
    else
    {
        cout << "Invalid operator!" << endl;
    }
    return 0;
}