#include<iostream>
#include<string>
using namespace std;

class student
{
    private:
    int rollNo;
    string name;
    float marks;

    public:
    student(int r=0, string n="noname",float m=0)
    {
        rollNo=r;
        name=n;
        marks=m;
    }
    void displayStudent( )
    {
        cout<<rollNo<<"  "<<name<<"  "<<marks<<endl;
    }

};
int main()
{
    student s1(67,"shura",100),s2(69,"harshal", 200);
    s1.displayStudent();
    s2.displayStudent();
}