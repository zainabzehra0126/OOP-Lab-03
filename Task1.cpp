#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string Title;
    string Author;
    double Price;

public:
    Book() {
        Title = "Untitled";
        Author = "Anonymous";
        Price = 0.0;
    }

    Book(string title, string author = "Unknown", double price = 0.0) {
        Title = title;
        Author = author;
        Price = price;
    }

    Book(const Book& other) {
        Title = other.Title;
        Author = other.Author;
        Price = other.Price;
    }

    void display() const {
        cout << "Book Information" << endl;
        cout << "Title : " << Title << endl;
        cout << "Author: " << Author << endl;
        cout << "Price : $" << Price << endl;
    }
};

int main() {
    Book book1;
    cout << "Default Constructor Book:" << endl;
    book1.display();

    cout << endl;

    Book book2("2026", "R.K.Rowlin", 9.0);
    cout << "Parameterized Book:" << endl;
    book2.display();

    cout << endl;

    Book book3(book2);
    cout << "Copy Constructor Book:" << endl;
    book3.display();

    cout << endl;

    Book book4("The Bestseller");
    cout << "Title Only Book:" << endl;
    book4.display();

    cout << endl;

    Book book5("Rabbeca Yorros", "Fourth Wing");
    cout << "Title + Author Book:" << endl;
    book5.display();

    return 0;
}
