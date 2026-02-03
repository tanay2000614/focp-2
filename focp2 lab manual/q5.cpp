#include <iostream>
using namespace std;
int main()
{
    int a1 = 0, b1 = 0, t;
    int a2 = 0, b2 = 0;
    int a3 = 0, b3 = 0;

    cout << "enter a1: ";
    cin >> a1;

    cout << "enter b1: ";
    cin >> b1;

    cout << "enter a2: ";
    cin >> a2;

    cout << "enter b2: ";
    cin >> b2;

    cout << "enter a3: ";
    cin >> a3;

    cout << "enter b3: ";
    cin >> b3;

    // Method 1:Temporary Variable
    cout << "Method 1: Using Temporary Variable" << endl;

    t = a1;
    a1 = b1;
    b1 = t;

    cout << "After swap: a = " << a1 << ", b = " << b1 << endl;
    cout << endl;

    // Method 2: Arithmetic
    cout << "Method 2: Without Temporary Variable" << endl;

    a2 = a2 + b2;
    b2 = a2 - b2;
    a2 = a2 - b2;

    cout << "After swap: a = " << a2 << ", b = " << b2 << endl;
    cout << endl;

    // Method 3: swap() Function
    cout << "Method 3: Using swap() Function" << endl;

    swap(a3, b3);

    cout << "After swap: a = " << a3 << ", b = " << b3 << endl;

    return 0;
}