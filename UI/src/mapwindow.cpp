
#ifndef MAPWINDOW_CPP
#define MAPWINDOW_CPP

#include "mapwindow.h"
#include <QProcess>
#include <QGraphicsItem>
#include <QDir>
#include <QDebug>

#include "ui_mapwindow.h"

using namespace std;

MapWindow::MapWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MapWindow)
{
    ui->setupUi(this);



}

MapWindow::~MapWindow()
{
    delete ui;
}


#endif


void MapWindow::on_pushButton_clicked()
{
    close();
}

void MapWindow::on_pushButton_2_clicked()
{
    QDir home(".");
    qDebug() << home.absolutePath();

    QPixmap pix("release/test.png");
    pix = pix.scaled(QSize(500,500), Qt::IgnoreAspectRatio);



    ui->map->setPixmap(pix);


}
