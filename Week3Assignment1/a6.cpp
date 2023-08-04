#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int r = 0, temp = n;
    while (temp > 0)
    {
        r *= 10;
        r += temp % 10;
        temp /= 10;
    }
    cout << r + n;
}