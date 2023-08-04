#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << ch << " is an alphabet";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << ch << " is digit";
    }
    else
    {
        cout << ch << " is a Special Character";
    }
}