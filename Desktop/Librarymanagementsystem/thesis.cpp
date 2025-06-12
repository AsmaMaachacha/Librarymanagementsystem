#include "thesis.h"
#include <iostream>

Thesis::Thesis(QString t, QString a, int y, QString s)
    : Resource(t, a, y), supervisor(s) {}

QString Thesis::getType() const {
    return "Thesis";
}

void Thesis::display() const {
    std::cout << "Thesis: " << title.toStdString()
              << ", Author: " << author.toStdString()
              << ", Supervisor: " << supervisor.toStdString()
              << ", Year: " << year
              << ", Available: " << (available ? "Yes" : "No") << "\n";
}
