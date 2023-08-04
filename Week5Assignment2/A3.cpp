#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int a[size];
    cout << "Enter the elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int i;
    for (int i = 0; i < size - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            break;
        }
    }
    if (i == size - 1)
        cout << "Yes, Array is sorted";
    else
        cout << "No, Array is not sorted";
}