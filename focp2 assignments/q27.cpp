#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int maxp;

    for (int i = 0; i < 10; i++)
    {
        cout << "enter price: ";
        cin >> arr[i];
    }

    maxp = arr[0];

    for (int j = 0; j < 10; j++)
    {
        if (maxp < arr[j])
            maxp = arr[j];
    }

    cout << maxp;
}