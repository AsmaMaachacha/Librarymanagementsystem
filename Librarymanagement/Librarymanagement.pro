QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Article.cpp \
    Digitalmedia.cpp \
    Faculty.cpp \
    Library.cpp \
    Libraryevent.cpp \
    Loan.cpp \
    Loan.cpp \
    Notification.cpp \
    Notification.cpp \
    Reservation.cpp \
    Reservation.cpp \
    Resource.cpp \
    Student.cpp \
    Thesis.cpp \
    User.cpp \
    book.cpp \
    main.cpp \
    resource.cpp \
    student.cpp \
    thesis.cpp \
    user.cpp

HEADERS += \
    Article.h \
    Digitalmedia.h \
    Faculty.h \
    Library.h \
    Libraryevent.h \
    Loan.h \
    Loan.h \
    Notification.h \
    Notification.h \
    Reservation.h \
    Reservation.h \
    Resource.h \
    Student.h \
    Thesis.h \
    User.h \
    book.h \
    mainwindow.h \
    resource.h \
    student.h \
    thesis.h \
    user.h

FORMS += \
    resource.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
