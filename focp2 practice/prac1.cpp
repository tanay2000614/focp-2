#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "enter n";
    cin >> n;

    if (n > 99)
    {
        cout << "n is a 3 digit number" << endl;
    }

    else if (n < 1000)
    {
        cout << "it is a 3 digit number" << endl;
    }

    else
    {
        cout << "it is not a 3 digit no";
    }

    return 0;
}