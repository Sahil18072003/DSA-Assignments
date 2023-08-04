#include <iostream>
using namespace std;
int palindrome(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            cout << "No";
            break;
        }
        else
        {
            cout << "Yes";
            break;
        }
    }
}
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

    cout << palindrome(a, size);
}