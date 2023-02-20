// #include <bits/stdc++.h>
#include <iostream>
// #include <cmath>
#include <vector>
// #include <string.h>
// #include <utility>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(3);
    v.push_back(1);
    v.push_back(6);
    v.push_back(3);

    //auto keyword automatically handle data types
    auto a = 1;

    cout << a + 5 << endl;
    //printing vector using for each loop
    cout << "Before sorting: ";
    for (int x : v)
    {
        cout << x << " ";
    }

    cout << endl;
    //sorting a vector
    sort(v.begin(), v.end());
    // sort(v.begin(), v.end(), greater<int>());    //this will sort in decending order

    cout << "After sorting: ";
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}