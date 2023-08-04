#include <iostream>
using namespace std;
int main()
{
    float radius;
    cout << "Enter the reduis of circle: ";
    cin >> radius;
    float area = 3.14 * radius * radius;
    float circumference = 2 * 3.14 * radius;
    if (area > circumference)
    {
        cout << "Area is greater than circumference" << endl
             << area << endl
             << circumference;
    }
    else
    {
        cout << "Circumference is greater than area";
    }
}