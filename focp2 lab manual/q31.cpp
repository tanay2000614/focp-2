#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int f = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "enter no: ";
        cin >> arr[i];
    }

    for (int j = 0; j < 5; j++)
    {
        if (arr[j] % 15 == 0)
            f++;
    }

    cout << f;
}