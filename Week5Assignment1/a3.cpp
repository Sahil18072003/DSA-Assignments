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
    int Min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (min > arr[i])
        // {
        //     min = arr[i];
        // }
        Min = min(Min, arr[i]);
    }
    cout << Min;
    return 0;
}