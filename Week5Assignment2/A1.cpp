#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter x : ";
    cin >> x;

    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int a[size];
    cout << "Enter the elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (x < a[i])
        {
            count++;
        }
    }
    cout << count;
}