#include "Library.hpp"
// #include "removeElement.hpp"
#include <iostream>

using namespace std;

int Library::totalBorrowedBooks = 0;

void Library::addBook(string title, double bookCost) {
    extern double libraryBudget;
    if (bookList.size() < 100) {
        bookList.push_back(title);
        libraryBudget -= bookCost;
        cout << "Current budget: " << libraryBudget << endl;
    }
    else
        cout << "Library is Full!" << endl;
}

bool Library::borrowBook(string title) {
    // for (book : bookList)
    // if (title == book) {
    //  bookList.erase(title);
    // ...
    // }
    for (int i = 0; i < bookList.size(); i++) {
        if (title == bookList[i]) {
            bookList.erase(bookList.begin() + i);
            cout << "Book " << title << " borrowed!" << endl;
            totalBorrowedBooks++;
            return true;
        }
    }
    cout << "Book " << title << " not found!" << endl;
    return false;
}

void Library::listBooks() {
    cout << "Book List: " << endl;
    // for (auto book : bookList)
    //  cout << book << endl;
    for (int i = 0; i < bookList.size(); i ++) {
        cout << bookList[i] << endl;
    }
}

int Library::getTotalBorrowedBooks() const {
    return totalBorrowedBooks;
}

void Library::reserveBook(string title) const {
    for (auto book: bookList) {
        if (title == book) {
            for (auto book_in_res: reservedBooks) {
                if (title == book_in_res) {
                    cout << "Book " << title << " already reserved" << endl;
                    return;
                }
            }
            reservedBooks.push_back(title);
            reservedCount++;
            cout << "Book reserved: " << title << endl;
            cout << "Reserved book count: " << reservedCount << endl;
        }
    }
}


Library::Library() : reservedCount(0) {}