#include <iostream>
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
    int x = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != x)
        {
            cout << x << endl;
            flag = true;
            break;
        }
        else
            x++;
    }
    if (flag == false)
        cout << x << endl;
    return 0;
}