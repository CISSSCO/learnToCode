//recursion
#include <iostream>
using namespace std;

long long fib(int n)
{
    //base case
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    long long ans = fib(n);
    cout << ans;

    return 0;
}