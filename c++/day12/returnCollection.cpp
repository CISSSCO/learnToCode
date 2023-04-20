#include <iostream>
#include <vector>
using namespace std;

vector<int> getvector()
{
    vector<int> v;
    cout << "Enter 3 number: ";
    int temp;
    for (int i = 0; i < 3; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    return v;
}

int main()
{
    vector<int> v = getvector();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}