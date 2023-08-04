#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the n : ";
    cin >> n;
    for (int i = n; i <= 10 * n; i += n)
    {
        cout << i << endl;
    }

    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << n * i << endl;
    // }
}