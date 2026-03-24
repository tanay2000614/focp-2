#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int sum = 0;
    int i = 0;
    int a = 0;

    char yesno;

    while (1)
    {
        cout << "ENTER NOS:\n";
        cin >> a;
        if (a >= 0)
        {

            sum += a;
        }
        else
            cout << "-ve no\n";
        cout << " do you wish to continue?[y/n]\n";
        cin >> yesno;
        if (yesno == 'n')
        {
            break;
        }
        i++;
    }
    cout << sum;
}