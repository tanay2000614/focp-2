#include <iostream>
using namespace std;

int main()
{
    int itemno, quantity;
    float total, price, discount;

    cout << "enter item no: ";
    cin >> itemno;

    cout << "enter item quantity: ";
    cin >> quantity;

    cout << "enter price of 1 unit item: ";
    cin >> price;

    total = quantity * price;

    discount = 20.0 / 100 * total;

    cout << "the final price is: " << total - discount << endl;
}