#include <iostream>
using namespace std;
int square(int i)
{
    return i * i;
}
void fun(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << square(i) << endl;
    }
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    fun(n);
}