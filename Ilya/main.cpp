#include "mainwindow.h"
#include "park.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    Park park;
    park.show();


    return a.exec();
}
