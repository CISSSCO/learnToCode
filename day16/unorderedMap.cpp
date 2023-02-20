#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<int, int> m;
    m[2] = 10;
    m[3] = 1;
    m[1] = 17;
    m[1] = 7;
    m[7] = 17;
    m[211111] = 27;
    m[11] = 37;

    for (auto x : m)
    {
        cout << x.first << ":" << x.second << endl;
    }

    return 0;
}