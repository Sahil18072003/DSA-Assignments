#include <iostream>
using namespace std;
int main()
{
    int x, y;
    int *p1 = &x;
    int *p2 = &y;
    cout << "Enter the two numbers : ";
    cin >> *p1 >> *p2;
    cout << (*p1) * (*p2);
}