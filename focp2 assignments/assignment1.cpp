#include <iostream>
#include <string>
using namespace std;
//=======================================================

// notes:   strcat(destination, source);==>appends string

// data

string stdname[100] = {}; // null array containing the names of the students;
int stdid[100] = {};
int stdno = 0;
int stdmarks[100][4]={};
//=======================================================

// functions

float clsavg(int subno)       //    ===>class average
{
    float avg;
    int sum=0;
    for(int i=0;i<stdno;i++)
    {
        sum+=stdmarks[i][subno];
    }
    avg=sum/(stdno*100.0)*100.0;
    return avg;
}
float stdavg(int l)       //    ===>student average
{
    float avg;
    int sum=0;
    for(int i=0;i<4;i++)
    {
        sum+=stdmarks[l][i];
    }
    avg=(sum/400.0)*100.0;
    return avg;
}
float clstop(int subno)         //  ==> class top
{
    int topm=0;
    for(int i=0;i<stdno;i++)
    {
        if(stdmarks[i][subno]>topm)
        {
            topm=stdmarks[i][subno];
        }
    }
    return topm;
}
string grade(float G)     //==>gives grade
{
    string g;
    if(G<40&&G>=0)
    g="F";
    else if(G<50&&G>=40)
    g="C";
     else if(G<60&&G>=50)
    g="C+";
     else if(G<70&&G>=60)
    g="B";
     else if(G<80&&G>=70)
    g="B+";
     else if(G<90&&G>=80)
    g="A";
     else if(G<=100&&G>=90)
    g="A+";
    else 
    g="X";
    return g;
}

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
            {
                int tempid = 0; //==>STORES THE USER INPUT ID TEMPORARILY
                string arr1;
                cout << "enter student name:" << endl;
                cin.ignore();
                getline(cin, arr1); //==>takes cin and puts it in arr 1 i.e the input string
                cout << "enter student id:";
                cin >> tempid;
                if (tempid != 0)
                {

                    stdname[stdno] = arr1;
                    stdid[stdno] = tempid;
                    stdno++;
                }
                break;
            }
            case 2:
            {
                int tempid=0;
                int tempno=0;
                int subno=0;
                int marks=0;
                int l=0;
                cout<<"enter stdid whose marks have to be entered/updated:";
                cin>>tempid;
                for(int i=0; i<stdno; i++)
                {
                    if(stdid[i]==tempid)
                    {
                    l=i;
                    break;
                    }
                }
                cout<<"0. chem"<<endl<<"1. coding"<<endl<<"2. maths"<<endl<<"3. physics"<<endl;
                cout<<"enter subject no for student "<<stdname[l]<<endl;
                cin>>subno;
                cout<<"enter subject marks for student "<<stdname[l]<<endl;
                cin>>marks;
                stdmarks[l][subno]=marks;

                break;
            }
            case 3:
            {
                int tempid=0, l=0;
                cout<<"enter student id:";
                cin>>tempid;
                for(int i=0; i<stdno; i++)
                {
                    if(stdid[i]==tempid)
                    {
                    l=i;
                    break;
                    }
                }
                cout<<l<<". "<<stdid[l]<<" "<<stdname[l]<<endl;
                break;
            }
            case 4:
            {
                break;
            }
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
            {
                int subno=0;
                cout<<"0. chem"<<endl<<"1. coding"<<endl<<"2. maths"<<endl<<"3. physics"<<endl;
                cout<<"enter subject no for student: ";
                cin>>subno;
                cout << clsavg(subno); // gives average marks of class for each subject

                break;
            }
            case 2:
            {
                int subno=0;
                cout<<"0. chem"<<endl<<"1. coding"<<endl<<"2. maths"<<endl<<"3. physics"<<endl;
                cout<<"enter subject no for student: ";
                cin>>subno;
                cout << clstop(subno); // gives top scorer for each subject

                break;
            }
            case 3:
            {
                int tempid=0;
                int l=0;
                int subno;
                float avg=0.0;
                cout<<"enter the student id:";
                cin>>tempid;
                 for(int i=0; i<stdno; i++)
                {
                    if(stdid[i]==tempid)
                    {
                    l=i;
                    break;
                    }
                }

                cout<<"STUDENT SUMMARY:"<<endl
                    <<"NAME:"<<stdname[l]<<endl
                    <<"0. chem:"<<stdmarks[l][0]<<"GRADE:" << grade(stdmarks[l][0])<<endl
                    <<"1. code:"<<stdmarks[l][1]<<grade(stdmarks[l][1])<<endl
                    <<"2. math:"<<stdmarks[l][2]<<grade(stdmarks[l][2])<<endl
                    <<"3. physics:"<<stdmarks[l][3]<<grade(stdmarks[l][3])<<endl;

                    avg=stdavg(l);
                    cout<<"student avg:"<<avg<<endl;
                    
                    cout<<"OVERALL GRADE:"<<grade(avg);
                    
                    
                 // array for name of entered student
                

                break;
            }
            case 4:
            {
                break; // returns to main menu
            }
            }
        }
        else if (_choice == 3)
            f = 9; // ends the loop for exitting it
        else
            cout << "wrong input, pls try again"; // contingency plan
    }
    return 0;
}