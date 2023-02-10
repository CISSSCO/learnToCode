#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.pop_back();
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.pop_back();
    v1.push_back(7);
    v1.push_back(7);
    v1.push_back(7);
    v1.push_back(7);
    v1.push_back(7);

    v1[6] = 10;
    cout << "Size: " << v1.size() << endl;
    cout << "Capacity: " << v1.capacity() << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        // cout << v1[i] << " ";
        cout << v1.at(i) << " ";
    }

    return 0;
}

/* vector<datatype> variablename*/