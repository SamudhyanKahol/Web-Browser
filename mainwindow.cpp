#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QWebEngineView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Create web view
    QWebEngineView *view = new QWebEngineView(this);
    view->load(QUrl("https://www.qt.io"));
    setCentralWidget(view);
}

MainWindow::~MainWindow()
{
    delete ui;
}
