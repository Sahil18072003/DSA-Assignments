#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "No of rows : ";
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (i + j == n + 1 || i == n || j == n)
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     for (int j = n - 1; j >= 1; j--)
    //     {
    //         if (i + j == n + 1 || i == n || j == n)
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 2; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (i == j || j == n)
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     for (int j = n - 1; j >= 1; j--)
    //     {
    //         if (i == j || j == n)
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     cout << endl;
    // }

    int m = 2 * n - 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == m / 2 || j == m / 2 || abs(i - j) == m / 2 || i + j == m / 2 || i + j == 3 * (n - 1))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}