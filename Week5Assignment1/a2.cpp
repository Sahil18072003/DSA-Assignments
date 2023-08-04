#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elemnets : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = INT_MIN, smax;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] != max && smax < arr[i])
        {
            smax = arr[i];
        }
    }
    if (smax == INT_MIN)
    {
        cout << "No second element exists" << endl;
    }
    else
        cout << smax << endl;
    return 0;
}