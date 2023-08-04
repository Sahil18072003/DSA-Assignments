#include <iostream>
using namespace std;
float area(int r)
{
    return 3.14 * r * r;
}
int main()
{
    int r;
    cout << "Enter radius : ";
    cin >> r;
    cout << "Area of the circle is " << area(r) << " unit square";
}