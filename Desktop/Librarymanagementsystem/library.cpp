#include "library.h"
#include <iostream>

Library::~Library() {
    for (auto r : resources) delete r;
    for (auto u : users) delete u;
    for (auto l : loans) delete l;
    for (auto res : reservations) delete res;
}

void Library::addResource(Resource* r) {
    resources.push_back(r);
}

void Library::removeResource(QString title) {
    for (auto it = resources.begin(); it != resources.end(); ++it) {
        if ((*it)->getTitle() == title) {
            delete *it;
            resources.erase(it);
            std::cout << "Resource \"" << title.toStdString() << "\" removed.\n";
            return;
        }
    }
    std::cout << "Resource not found.\n";
}

void Library::listResources() const {
    std::cout << "\n📚 All Resources:\n";
    for (const auto& r : resources) {
        r->display();
    }
}

Resource* Library::searchResource(QString title) {
    for (auto r : resources) {
        if (r->getTitle() == title) return r;
    }
    return nullptr;
}

void Library::addUser(User* u) {
    users.push_back(u);
}

User* Library::getUserByID(QString id) {
    for (auto u : users) {
        if (u->getUserID() == id) return u;
    }
    return nullptr;
}

void Library::listUsers() const {
    std::cout << "\n👤 Registered Users:\n";
    for (auto u : users) {
        std::cout << u->getName().toStdString() << " ["
                  << u->getRole().toStdString() << "]\n";
    }
}

void Library::borrowResource(QString userID, QString title) {
    User* u = getUserByID(userID);
    Resource* r = searchResource(title);

    if (u && r) {
        if (r->isAvailable()) {
            u->borrowResource(r);
            r->setAvailable(false);
            Loan* loan = new Loan(u, r);
            loans.push_back(loan);
            std::cout << "Loan recorded.\n";
        } else {
            std::cout << "Resource not available. Adding to reservation list.\n";
            reserveResource(userID, title);
        }
    } else {
        std::cout << "Borrow failed. User or resource not found.\n";
    }
}

void Library::returnResource(QString userID, QString title) {
    User* u = getUserByID(userID);
    Resource* r = searchResource(title);

    if (u && r) {
        u->returnResource(r);
        r->setAvailable(true);
        removeLoan(u, r);
        std::cout << "Returned successfully.\n";

        checkReservation(r);
    }
}

void Library::reserveResource(QString userID, QString title) {
    User* u = getUserByID(userID);
    Resource* r = searchResource(title);

    if (u && r) {
        Reservation* res = new Reservation(u, r);
        reservations.push_back(res);
        std::cout << "Reservation added.\n";
    }
}

void Library::removeLoan(User* u, Resource* r) {
    for (auto it = loans.begin(); it != loans.end(); ++it) {
        if ((*it)->getUser() == u && (*it)->getResource() == r) {
            delete *it;
            loans.erase(it);
            return;
        }
    }
}

void Library::checkReservation(Resource* r) {
    for (auto it = reservations.begin(); it != reservations.end(); ++it) {
        if ((*it)->getResource() == r) {
            User* nextUser = (*it)->getUser();
            std::cout << "📢 Notifying " << nextUser->getName().toStdString()
                      << ": \"" << r->getTitle().toStdString() << "\" is now available.\n";

            reservations.erase(it);
            return;
        }
    }
}

void Library::addEvent(const LibraryEvent& event) {
    events.push_back(event);
}

void Library::showEvents() const {
    std::cout << "\n📋 Upcoming Events:\n";
    for (const auto& e : events) {
        e.display();
    }
}
