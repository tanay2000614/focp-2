#include <iostream>
using namespace std;

int main()
{
    int n;
    float s, b, net;

    cout << "enter no of employees: ";
    cin >> n;

    cout << "enter salary of employees: ";
    cin >> s;

    net = n * s;

    cout << "net salary of employees: " << net + 0.12 * net << endl;
}