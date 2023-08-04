#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the x-y coordinates of the point : ";
    cin >> x >> y;

    if (x == 0 && y == 0)
    {
        cout << "The point lies on the origin.";
    }
    else if (x == 0 && y != 0)
    {
        cout << "The point lies on the X-axis.";
    }
    else if (x != 0 && y == 0)
    {
        cout << "The point lies on the Y-axis.";
    }
    else
    {
        cout << "The point lies on the plane.";
    }
}