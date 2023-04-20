//factorial of a number
// 5! = 5 * 4 * 3 * 2 * 1
#include <iostream>
using namespace std;

//recursive function
long long fact(int n)
{
    //base case
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    //with the help of loop
    // for (int i = 1; i <= a; i++)
    // {
    //     fact = fact * i;
    // }
    // cout << fact << endl;
    long long ans = fact(a);
    cout << ans;

    return 0;
}