#include <iostream>
using namespace std;

int sum(int x, int y)
{
    int s = x + y;
    return s;
}

int sub(int x, int y)
{
    int S = x - y;
    return S;
}

int prod(int x, int y)
{
    int p = x * y;
    return p;
}

float frac(float x, float y)
{
    float f = x / y;
    return f;
}

int main()
{
    float a = 0;
    float b = 0;

    cout << "enter the 1st no:" << endl;
    cin >> a;

    cout << "enter the 2nd no:" << endl;
    cin >> b;

    cout << "sum:" << sum(a, b) << endl;
    cout << "sub:" << sub(a, b) << endl;
    cout << "prod:" << prod(a, b) << endl;
    cout << "frac:" << frac(a, b) << endl;
}