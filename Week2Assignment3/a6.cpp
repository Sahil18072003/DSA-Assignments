#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    while (i < 26)
    {
        cout << (char)(i + 'A') << " " << (int)(i + 'A') << endl;
        i++;
    }
}