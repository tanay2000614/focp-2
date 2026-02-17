#include <iostream>  //==> header file for input output ops
using namespace std; //==> has names of the technical library elements

class Student
{ //==> has its own data and functions, also controls the access of data

private:       //==> ACCESS SPECIFIERS
    int marks; //==> private only visible inside this class(not even main)

protected:
    int rollNumber; //==> protected: accessible inside class ( and derived classes) ,not even main

public: //==> accessible everywhere
    string name;

    void setData(int m, int n) //==> function is public, sets private and protected data, main fn  too
    {
        marks = m;
        rollNumber = n;
    }
    void getMarks()
    {
        cout<<marks;
    }
};

int main()
{

    // Object creation: when we need to access data of classes outside of classes
    Student s1;

    // accessing public member:
    s1.name = "Alice";
    s1.setData(90,101);

    cout<<"name:"<<s1.name<<endl;
    cout<<"marks:"<< s1.getMarks() <<endl;
}
