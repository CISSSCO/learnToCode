#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    string s = "Abhishek";
    //normal for loop
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    //for each loop
    for (int i : arr)
    {
        cout << i << " ";
        //1 2 3 4 5 6
    }

    cout << endl;
    for (char c : s)
    {
        cout << c << "-";
    }
    return 0;
}
