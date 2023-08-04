#include <iostream>
using namespace std;
int odd(int a, int b)
{
    if (a > b)
    {
        odd(b, a);
    }
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int a, b;
    cout << "Enter a and b : ";
    cin >> a >> b;
    odd(a, b);
}