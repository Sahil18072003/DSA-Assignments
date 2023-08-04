#include <iostream>
using namespace std;
int main()
{
    int r, h;
    cout << "Enter radiusnand height of cylinder :" << endl;
    cin >> r >> h;
    int pi = 3.14;
    int volume = pi * r * r * h;
    cout << volume;
}