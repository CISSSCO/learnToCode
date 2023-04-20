//find element that occurs only once
#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> m;
    for (int i = 0; i < size; i++)
    {
        m[arr[i]]++;
    }

    for (auto x : m)
    {
        // cout << x.first << ":" << x.second << endl;
        if (x.second >= 2)
        {
            //this will print the number which occurs more than once
            cout << x.first << " ";
        }
    }

    cout << endl;
    for (auto x : m)
    {

        //this will print the number which occurs once
        if (x.second == 1)
        {

            cout << x.first << " ";
        }
    }

    return 0;
}