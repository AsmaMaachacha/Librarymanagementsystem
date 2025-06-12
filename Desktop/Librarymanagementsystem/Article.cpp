#include "article.h"
#include <iostream>

Article::Article(QString t, QString a, int y, QString j, int v)
    : Resource(t, a, y), journal(j), volume(v) {}

QString Article::getType() const {
    return "Article";
}

void Article::display() const {
    std::cout << "Article: " << title.toStdString()
              << ", Author: " << author.toStdString()
              << ", Journal: " << journal.toStdString()
              << ", Volume: " << volume
              << ", Year: " << year
              << ", Available: " << (available ? "Yes" : "No") << "\n";
}
