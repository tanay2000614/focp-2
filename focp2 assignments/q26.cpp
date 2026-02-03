#include <iostream>
using namespace std;

int main()
{
    int arr[5], sum = 0;
    float ptg;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the marks: ";
        cin >> arr[i];
    }
    for (int j = 0; j < 5; j++)
    {
        sum += arr[j];
    }
    ptg = (sum / 500.0);
    cout << "ptg is: " << ptg * 100.0 << "%" << endl;
    
}