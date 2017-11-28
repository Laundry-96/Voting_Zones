#include "mainwindow.h"
//#include "mapwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //MapWindow mapWin;
    w.show();
    //mapWin.show();

    return a.exec();
}
