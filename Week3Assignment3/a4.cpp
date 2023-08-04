#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "No of rows : ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << char(i + 'A' - 1) << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << char(j + 'A' - 1) << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << char(j + n + i + 'A' - 2) << " ";
        }
        cout << endl;
    }
}