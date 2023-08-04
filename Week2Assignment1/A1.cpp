#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the 1st integer: ";
    cin >> a;
    cout << "Enter the 2nd integer: ";
    cin >> b;
    if (a > b)
    {
        cout << "first number " << a << " is the largest";
    }
    else
    {
        cout << "second number " << b << " is the largest";
    }
}