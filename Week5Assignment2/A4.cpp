#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int a[size];
    cout << "Enter the elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int sume = 0, sumo = 0;
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            sume += a[i];
        }
        else
        {
            sumo += a[i];
        }
    }
    cout<<abs(sume-sumo);
}