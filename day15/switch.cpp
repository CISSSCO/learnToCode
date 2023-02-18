//Switch statement
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    char op;
    cout << "Enter the operator: ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Sum: " << a + b << endl;
        break;
    case '-':
        cout << "Subtraction: " << a - b << endl;
        break;
    case '*':
        cout << "Product: " << a * b << endl;
        break;
    case '/':
        cout << "Division: " << a / b << endl;
        break;
    case '%':
        cout << "Reminder: " << a % b << endl;
        break;
    default:
        cout << "Invalid operator!!!" << endl;
    }
    return 0;
}

/*
if('+' == '+')
*/