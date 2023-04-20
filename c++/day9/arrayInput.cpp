#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    int num[size];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "You have entered" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
    cout << *num << endl;
    cout << &num[0] << endl;
    cout << *&num[0] << endl;
    return 0;
}