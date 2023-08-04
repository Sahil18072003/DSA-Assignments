#include <iostream>
using namespace std;
int square(int i)
{
    return i * i;
}
int count(int n)
{
    int count = 0;
    int a = n;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    if (a == 0)
        cout << 1;
    else
        cout << square(count);
    return count;
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    count(n);
}