#include <iostream>
using namespace std;

float rect(float x, float y)
{
    float z = x * y;
    return z;
}

float cir(float r)
{
    float a = r * r * 3.14;
    return a;
}

float sq(float s)
{
    return s * s;
}

int main()
{

    float rc = 0;
    float l = 0;
    float b = 0;tanay@fedora:~/focp-2$ git status
On branch main
Your branch is ahead of 'origin/main' by 1 commit.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean

    float s = 0;

    cout << "input radius of circle:" << endl;
    cin >> rc;
    cout << cir(rc);

    cout << "input radius of circle:" << endl;
    cin >> rc;
    cout << cir(rc);

    cout << "input length of rectangle l:" << endl;
    cin >> l;

    cout << "input breadth of rectangle b:" << endl;
    cin >> b;
    cout << rect(l, b);

    cout << "input breadth of rectangle b:" << endl;
    cin >> b;
    cout << rect(l, b);

    cout << "input side of square:" << endl;
    cin >> s;
    cout << sq(s);

    return 0;
}