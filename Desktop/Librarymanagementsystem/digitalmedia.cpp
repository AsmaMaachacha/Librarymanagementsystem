#include "digitalmedia.h"
#include <iostream>

DigitalMedia::DigitalMedia(QString t, QString a, int y, QString ftype, double size)
    : Resource(t, a, y), fileType(ftype), sizeMB(size) {}

QString DigitalMedia::getType() const {
    return "Digital Media";
}

void DigitalMedia::display() const {
    std::cout << "Digital Media: " << title.toStdString()
              << ", Author: " << author.toStdString()
              << ", Type: " << fileType.toStdString()
              << ", Size: " << sizeMB << " MB"
              << ", Year: " << year
              << ", Available: " << (available ? "Yes" : "No") << "\n";
}