#include "libraryevent.h"

LibraryEvent::LibraryEvent(QString t, QString d, QDate dt)
    : title(t), description(d), date(dt) {}

QString LibraryEvent::getTitle() const { return title; }
QString LibraryEvent::getDescription() const { return description; }
QDate LibraryEvent::getDate() const { return date; }
