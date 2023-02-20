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
    //here size is optional
    int arr[] = {5, 2, 1, 6, 2, 7, 22, 11, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    //printing array using for each loop
    cout << "Before sorting: ";
    for (auto x : arr)
    {
        cout << x << " ";
    }

    cout << endl;
    //sorting an array
    // cout << arr << endl;
    // cout << arr + size - 1 << endl;
    // cout << &arr[size - 1] << endl;

    //sorting an array
    // sort(arr, arr + size, greater<int>());
    sort(arr, arr + size);

    cout << "After sorting: ";
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}