#include <iostream>
using namespace std;
int main()
{
    int x1, x2, x3, y1, y2, y3, slope1, slope2;
    cout << "Enter point (x1,y1) : "<<endl;
    cin >> x1 >> y1;
    cout << "Enter point (x2,y2) : "<<endl;
    cin >> x2 >> y2;
    cout << "Enter point (x3,y3) : "<<endl;
    cin >> x3 >> y3;

    slope1 = y2-y1/x2-x1;
    slope2 = y3-y2/x3-x2;

    if (slope1==slope2)
    {
        cout << "All 3 points lie on the same line";
    }
    else
    {
        cout << "All 3 points do not lie on the same line";
    }
}