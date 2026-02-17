#include <iostream>
using namespace std;

class triangle {


private:
    float b;
    float h;

public:
    void getData() {
        cout << "Enter base: ";
        cin >> b;
        cout << "Enter height: ";
        cin >> h;
    }

    void area() {
        float area = 0.5 * b * h;
        cout << "Area = " << area << endl;
    }
};

int main() {

    triangle t;
    t.getData();
    t.area();
    return 0;
}