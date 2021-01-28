#include <iostream>
using namespace std;

int main()
{
    int arr[100], arr1[100];

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cin >> arr1[i];
    }

    int alice = 0, bob = 0;

    for (int i = 0; i < 3; i++)
    {

        if (arr[i] > arr1[i])
        {
            alice++;
        }
        else if (arr[i] == arr1[i])
        {
            continue;
        }
        else
        {
            bob++;
        }
    }

    cout << alice << " " << bob;
}