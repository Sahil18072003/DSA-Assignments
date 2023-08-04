#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the n : ";
    cin >> n;
    // 3 12 48 ........

    // int a = 3;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a << endl;
    //     a *= 4;
    // }

    int start = 3, r = 4;
    while (n--)
    {
        cout << start << endl;
        start *= r;
    }
}