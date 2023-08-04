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
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if ((a[i] == a[j]) && (i != j))
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << a[i] << endl;
            break;
        }
    }
}