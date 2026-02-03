#include <iostream>
using namespace std;

int main()
{
    float c, f, t;

    cout << "1 for c or 2 for f: ";
    cin >> t;

    if (t == 1)
    {
        cout << "enter temp: ";
        cin >> c;
        f = 1.8 * c + 32;
        cout << f;
    }
    else if (t == 2)
    {
        cout << "enter temp: ";
        cin >> f;
        c = (f - 32) / 1.8;
        cout << c;
    }
}