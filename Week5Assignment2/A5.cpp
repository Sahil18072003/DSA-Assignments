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
    for (int i = 0; i < size; i++)
    {
        if (i % 2 != 0)
        {
            a[i] *= 2;
        }
        else
        {
            a[i] += 10;
        }
        cout << a[i] << " ";
    }
}