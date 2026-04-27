// #include<fstream>
// using namespace std;
// int main(){
//     ofstream file("data.txt");
//     file<<"hello c++ file handling!";
//     file.close();
//     return 0;
// }

// #include<fstream>
// #include<iostream>
// using namespace std;
// int main()
// {
//     ifstream file("data.txt");
//     string text;
//     while (getline(file,text)){
//         cout<<text<<endl;

//     }
//     file.close();
//     return 0;

// }

// #include<fstream>
// using namespace std;
// int main(){
//     ofstream file("data.txt", ios::app);
//     file<<"\n new file added!";
//     file.close();
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter two numbers:";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw "Division by zero is not allowed!";
        }
        cout << "result=" << (a / b) << endl;
    }
    catch (const char *msg)
    {
        cout << "exception caught" << msg << endl;
    }
    cout << "program continues normally..." << endl;
    return 0;
}
