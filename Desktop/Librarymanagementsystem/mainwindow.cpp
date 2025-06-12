#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "book.h"

#include <QInputDialog>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QHeaderView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    
    connect(ui->listWidget, &QListWidget::currentRowChanged,
            ui->stackedWidget, &QStackedWidget::setCurrentIndex);

    
    connect(ui->btnAddBook, &QPushButton::clicked,
            this, &MainWindow::onAddBookClicked);


    ui->tableResources->setColumnCount(4);
    ui->tableResources->setHorizontalHeaderLabels({"Title", "Author", "Year", "Available"});
    ui->tableResources->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    
    updateResourceTable();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::onAddBookClicked() {
    QString title = QInputDialog::getText(this, "Add Book", "Enter Title:");
    if (title.isEmpty()) return;

    QString author = QInputDialog::getText(this, "Add Book", "Enter Author:");
    if (author.isEmpty()) return;

    QString isbn = QInputDialog::getText(this, "Add Book", "Enter ISBN:");
    if (isbn.isEmpty()) return;

    int year = QInputDialog::getInt(this, "Add Book", "Enter Year:", 2024);

    Book* b = new Book(title, author, year, isbn);
    library.addResource(b);

    QMessageBox::information(this, "Success", "Book added successfully!");
    updateResourceTable();
}

void MainWindow::updateResourceTable() {
    std::vector<Resource*> list = library.getAllResources();

    ui->tableResources->clearContents(); 
    ui->tableResources->setRowCount(static_cast<int>(list.size()));
    ui->tableResources->setColumnCount(4); 

    ui->tableResources->setHorizontalHeaderLabels({"Title", "Author", "Year", "Available"});

    for (int i = 0; i < static_cast<int>(list.size()); ++i) {
        Resource* r = list[i];

        ui->tableResources->setItem(i, 0, new QTableWidgetItem(r->getTitle()));
        ui->tableResources->setItem(i, 1, new QTableWidgetItem(r->getAuthor()));
        ui->tableResources->setItem(i, 2, new QTableWidgetItem(QString::number(r->getYear())));
        ui->tableResources->setItem(i, 3, new QTableWidgetItem(r->isAvailable() ? "Yes" : "No"));
    }
}
