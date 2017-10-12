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
#include <QtWidgets/QGraphicsView>
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
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuA_map_would_go_here;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MapWindow)
    {
        if (MapWindow->objectName().isEmpty())
            MapWindow->setObjectName(QStringLiteral("MapWindow"));
        MapWindow->resize(733, 605);
        centralWidget = new QWidget(MapWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 0, 551, 531));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(600, 10, 93, 28));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(570, 90, 160, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(centralWidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(570, 160, 160, 22));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(620, 60, 81, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(610, 140, 81, 16));
        MapWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MapWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 733, 26));
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
        menuA_map_would_go_here->setTitle(QApplication::translate("MapWindow", "A map would go here", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MapWindow: public Ui_MapWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPWINDOW_H
