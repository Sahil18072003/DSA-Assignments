#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the marks of students : ";
    cin >> a >> b >> c;

    if (a <= b && a <= c)
    {
        cout << "A scores the least marks";
    }
    else if (b <= a && b <= c)
    {
        cout << "B scores the least marks";
    }
    else
    {
        cout << "C scores the least marks";
    }
}