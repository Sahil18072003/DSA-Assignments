#include <iostream>
#include <climits>
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
    int max1, max2, max3;
    max1 = max2 = max3 = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2)
        {
            max3 = max2;
            max2 = a[i];
        }
        else if (a[i] > max3)
        {
            max3 = a[i];
        }
    }

    cout << "Three largest elements are : " << max1 << " " << max2 << " " << max3;
}