#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ---------------------- Book Class ----------------------
class Book {
private:
    int id;
    string title;
    string author;
    bool isIssued;

public:
    Book(int id, string title, string author) {
        this->id = id;
        this->title = title;
        this->author = author;
        this->isIssued = false;
    }

    int getId() const {
        return id;
    }

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    bool getStatus() const {
        return isIssued;
    }

    void issueBook() {
        if (!isIssued) {
            isIssued = true;
            cout << "Book issued successfully.\n";
        } else {
            cout << "Book is already issued.\n";
        }
    }

    void returnBook() {
        if (isIssued) {
            isIssued = false;
            cout << "Book returned successfully.\n";
        } else {
            cout << "Book was not issued.\n";
        }
    }

    void display() const {
        cout << "\nID: " << id
             << "\nTitle: " << title
             << "\nAuthor: " << author
             << "\nStatus: " << (isIssued ? "Issued" : "Available")
             << "\n----------------------\n";
    }
};

// ---------------------- Library Class ----------------------
class Library {
private:
    vector<Book> books;

public:
    void addBook() {
        int id;
        string title, author;

        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Author: ";
        getline(cin, author);

        books.push_back(Book(id, title, author));
        cout << "Book added successfully!\n";
    }

    void showBooks() const {
        if (books.empty()) {
            cout << "No books available.\n";
            return;
        }

        for (const auto &book : books) {
            book.display();
        }
    }

    void issueBook(int id) {
        for (auto &book : books) {
            if (book.getId() == id) {
                book.issueBook();
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void returnBook(int id) {
        for (auto &book : books) {
            if (book.getId() == id) {
                book.returnBook();
                return;
            }
        }
        cout << "Book not found.\n";
    }
};

// ---------------------- Main Function ----------------------
int main() {
    Library library;
    int choice, id;

    do {
        cout << "\n===== Library Menu =====\n";
        cout << "1. Add Book\n";
        cout << "2. Show Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                library.addBook();
                break;
            case 2:
                library.showBooks();
                break;
            case 3:
                cout << "Enter Book ID to issue: ";
                cin >> id;
                library.issueBook(id);
                break;
            case 4:
                cout << "Enter Book ID to return: ";
                cin >> id;
                library.returnBook(id);
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;
}