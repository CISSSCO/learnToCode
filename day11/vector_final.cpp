#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int size;
    cout << "Enter the number of element: ";
    cin >> size;
    int temp;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}