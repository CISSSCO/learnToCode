#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter element of the array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Your array is : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

/* vector<datatype> variablename
*/