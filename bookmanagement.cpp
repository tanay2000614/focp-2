#include <iostream>
#include <string>
using namespace std;

class book
{

private:
    string title;
    string author;
    int pages;

public:
    book(string t = "Untitled", string a = "Unknown", int p = 0) 
    {
         title=t;
         author=a;
         pages=p;
    }
    void setBook(string t, string a, int p)
    {
        title = t;
        author = a;
        pages = p;
    }

    void displayBook()
    {
        cout << title << "  " << author << "  " << pages << endl;
    }
};

int main()
{
    book b1;
    book b2;

    b1.setBook("hairy puttar", "shura", 400);
    b2.displayBook();
    return 0;
}