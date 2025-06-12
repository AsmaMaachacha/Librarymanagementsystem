#include "book.h"
#include <iostream>

Book::Book(QString t, QString a, int y, QString i)
    : Resource(t, a, y), isbn(i) {}

QString Book::getType() const {
    return "Book";
}

void Book::display() const {
    std::cout << "Book: " << title.toStdString() << ", Author: "
              << author.toStdString() << ", Year: " << year
              << ", ISBN: " << isbn.toStdString()
              << ", Available: " << (available ? "Yes" : "No") << "\n";
}
