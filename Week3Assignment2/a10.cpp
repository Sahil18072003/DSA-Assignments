#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "No of rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << i - k + 1 << " ";
        }
        cout << endl;
    }
}