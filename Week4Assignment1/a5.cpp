#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "No of rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    for (int i = 1; i <= n - 1; i++)
    {
        cout << n - i << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "  ";
        }
        for (int j = n - i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}