#include <iostream>
#include <conio.h>
using namespace std; //
int main()
{
    int P;
    cout << "ENTER THE MARKS:";
    cin >> P;

    switch (P / 10)
    {a
    case 10:
        cout << "topper";
        break;

    case 9:
        cout << "A";
        break;

    case 8:
        cout << "B";
        break;

    case 7:
        cout << "C";
        break;

    case 6:
        cout << "D";
        break;

    default:
        cout << "F";
        break;
    }

    return 0;
}