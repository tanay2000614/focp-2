#include <iostream>
using namespace std;

/*void swap(int x, int y)
{
    cout << "before" << x << y<<endl;
    int temp = x;
    x = y;
    y = temp;
    cout << "x and y after swap:" << x << y<<endl;
}
    */
void swap(int &x, int &y)
{
    cout << "before:" << x << y<<endl;
    int temp = x;
    x = y;
    y = temp;
    cout << "x and y after swap:" << x << y<<endl;
}

int main()
{
    int num1, num2;
    cout << "Provide 2 values" << endl;
    cin >> num1 >> num2;

    cout << "Values of num1 and num2 before function call" << num1 << num2<<endl;

    swap(num1, num2);

    cout << "Values of num1 and num2 before function call" << num1 << num2<<endl;
    return 0;
}