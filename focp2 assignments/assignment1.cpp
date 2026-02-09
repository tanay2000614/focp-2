#include <iostream>
using namespace std;
//=======================================================

// notes:   strcat(destination, source);==>appends string

// data

char stdname[] = {}; // null array containing the names of the students;
int stdno;

//=======================================================

// functions

void newstd(int stdid; char arr1[50])
{
}

void()

    //========================================================

    int main()
{
    int f = 1;
    int c1 = 0; // choice for student ops
    int c2 = 0; // choice for reports and analytics
    int _choice = 0;

    while (f == 1)
    {
        cout << "==MULTI STUDENT PERFORMANCE MANAGEMENT SYSTEM==" << endl;
        cout << "1. student operation" << endl
             << "2.reports and analytics" << endl
             << "3. exit" << endl;
        cout << "enter your input:";
        cin >> _choice;

        if (_choice == 1)
        {
            cout << "1. add new student" << endl
                 << "2. enter/update marks" << endl
                 << "3. view student details" << endl
                 << "4. back to main menu" << endl
                 << "enter your choice:";

            cin >> c1; // taking input for 1st menu

            switch (c1)
            {
            case 1:
                char arr1[] = {}; // name of the new student
                cout << "enter name of student:" << endl;
                // reads my entire input

                newstd(); // functon for appending 2 strings

                break;

            case 2:

                break;

            case 3:

                break;

            case 4:
                break;
            }
        }

        else if (_choice == 2)
        {
            cout << "1. class average" << endl
                 << "2. top scorer" << endl
                 << "3. student wise test summary" << endl
                 << "4. back to main menu" << endl
                 << "enter your choice:";

            cin >> c2;

            switch (c2)
            {
            case 1:
                cout << clsavg(); // gives average marks of class for each subject

                break;

            case 2:
                cout << clstop(); // gives top scorer for each subject

                break;

            case 3:
                char arr2[50] = {}; // array for name of entered student
                cout << "enter student name:" cin >>

                    break;

            case 4:
                break; // returns to main menu
            }
        }
        else if (_choice == 3)
            f = 9; // ends the loop for exitting it
        else
            cout << "wrong input, pls try again"; // contingency plan
    }
    return 0;
}