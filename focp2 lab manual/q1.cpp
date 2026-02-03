#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    float avg;

    cout << "enter no 1 ";
    cin >> a;

    cout << "enter no 2 ";
    cin >> b;

    cout << "enter no 3 ";
    cin >> c;

   
    cout << "percentage: "<<((a+b+c)*100)/300<<"%"<<endl;
    
    return 0;
}