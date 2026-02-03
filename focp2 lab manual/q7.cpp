#include <iostream>
using namespace std;

int main()
{
    int p1, p2, p3;

    cout << "score of p1: ";
    cin >> p1;

    cout << "score of p2: ";
    cin >> p2;

    cout << "score of p3: ";
    cin >> p3;

        if (p1 > p2 && p1 > p3)
        cout << "p1 wins";
    else if (p2 > p1 && p2 > p3)
        cout << "p2 wins";
    else
        cout << "p3 wins";
}