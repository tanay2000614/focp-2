#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    string name;
    int age;

    person()
    {
        name = "Unknown";
        age = 0;
        cout << "parent constructor called:" << name << endl;
    }
    void displayPerson()
    {
        cout << "Name:" << name << endl;
    }
};

class student : public person
{
public:
    int rollno;
    int marks;
    student()
    {
        rollno = 0;
        marks = 0;
        cout << "child constructor called:" << name << endl;
    }
    void displayStudent()
    {
        cout << "STD Name:" << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    student s1;
    s1.name = "yash";
    s1.age = 20;
    s1.rollno = 101;
    s1.marks = 85;
    s1.displayPerson();
    s1.displayStudent();
}