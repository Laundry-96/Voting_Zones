/********************************************************************************
** Form generated from reading UI file 'mapwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPWINDOW_H
#define UI_MAPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QSlider *horizontalSlider_3;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QLabel *map;
    QMenuBar *menuBar;
    QMenu *menuA_map_would_go_here;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MapWindow)
    {
        if (MapWindow->objectName().isEmpty())
            MapWindow->setObjectName(QStringLiteral("MapWindow"));
        MapWindow->resize(828, 611);
        centralWidget = new QWidget(MapWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(600, 10, 93, 28));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(570, 80, 160, 22));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_2 = new QSlider(centralWidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(570, 160, 160, 22));
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_2->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_2->setTickInterval(10);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(610, 130, 81, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(610, 50, 81, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(640, 110, 16, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(644, 195, 21, 21));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(600, 230, 111, 20));
        horizontalSlider_3 = new QSlider(centralWidget);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(570, 260, 160, 22));
        horizontalSlider_3->setMaximum(100);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        horizontalSlider_3->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_3->setTickInterval(10);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(640, 300, 55, 16));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(590, 360, 93, 28));
        map = new QLabel(centralWidget);
        map->setObjectName(QStringLiteral("map"));
        map->setGeometry(QRect(40, 40, 471, 431));
        MapWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MapWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 828, 26));
        menuA_map_would_go_here = new QMenu(menuBar);
        menuA_map_would_go_here->setObjectName(QStringLiteral("menuA_map_would_go_here"));
        MapWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MapWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MapWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MapWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MapWindow->setStatusBar(statusBar);

        menuBar->addAction(menuA_map_would_go_here->menuAction());

        retranslateUi(MapWindow);

        QMetaObject::connectSlotsByName(MapWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MapWindow)
    {
        MapWindow->setWindowTitle(QApplication::translate("MapWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MapWindow", "Back", Q_NULLPTR));
        label->setText(QApplication::translate("MapWindow", "Party Bias", Q_NULLPTR));
        label_2->setText(QApplication::translate("MapWindow", "Compactness", Q_NULLPTR));
        label_3->setText(QApplication::translate("MapWindow", "0", Q_NULLPTR));
        label_4->setText(QApplication::translate("MapWindow", "0", Q_NULLPTR));
        label_5->setText(QApplication::translate("MapWindow", "District Number", Q_NULLPTR));
        label_6->setText(QApplication::translate("MapWindow", "10", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MapWindow", "Create Map", Q_NULLPTR));
        map->setText(QApplication::translate("MapWindow", "TextLabel", Q_NULLPTR));
        menuA_map_would_go_here->setTitle(QApplication::translate("MapWindow", "A map would go here", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MapWindow: public Ui_MapWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPWINDOW_H
