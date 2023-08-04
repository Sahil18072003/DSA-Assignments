#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the n : ";
    cin >> n;
    // for (int i = 4; i <= 3 * n + 1; i += 3)
    // {
    //     cout << i << endl;
    // }

    // int a = 4;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a << endl;
    //     a += 3;
    // }

    int start = 4, d = 3;
    while (n--)
    {
        cout << start << endl;
        start += d;
    }
}