
#ifndef MAPWINDOW_H
#define MAPWINDOW_H

#include <QMainWindow>
#include <QtPrintSupport/QPrinter>

namespace Ui {
class MapWindow;
}

class MapWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MapWindow(QWidget *parent = 0);
    ~MapWindow();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MapWindow *ui;
};

#endif // MAPWINDOW_H

