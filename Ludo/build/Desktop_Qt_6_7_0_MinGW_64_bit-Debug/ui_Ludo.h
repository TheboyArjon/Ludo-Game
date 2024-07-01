/********************************************************************************
** Form generated from reading UI file 'Ludo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LUDO_H
#define UI_LUDO_H

#include <Board.h>
#include <Dice.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <Status.h>

QT_BEGIN_NAMESPACE

class Ui_Ludo
{
public:
    QAction *actionNew;
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionMode2P;
    QAction *actionMode3P;
    QAction *actionMode4P;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_7;
    Board *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    Dice *dice;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    Status *player1;
    Status *player2;
    Status *player3;
    Status *player4;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menuGame;
    QMenu *menuHelp;
    QMenu *menuMode;

    void setupUi(QMainWindow *Ludo)
    {
        if (Ludo->objectName().isEmpty())
            Ludo->setObjectName("Ludo");
        Ludo->resize(626, 423);
        actionNew = new QAction(Ludo);
        actionNew->setObjectName("actionNew");
        actionQuit = new QAction(Ludo);
        actionQuit->setObjectName("actionQuit");
        actionAbout = new QAction(Ludo);
        actionAbout->setObjectName("actionAbout");
        actionMode2P = new QAction(Ludo);
        actionMode2P->setObjectName("actionMode2P");
        actionMode2P->setCheckable(true);
        actionMode2P->setChecked(true);
        actionMode3P = new QAction(Ludo);
        actionMode3P->setObjectName("actionMode3P");
        actionMode3P->setCheckable(true);
        actionMode4P = new QAction(Ludo);
        actionMode4P->setObjectName("actionMode4P");
        actionMode4P->setCheckable(true);
        centralWidget = new QWidget(Ludo);
        centralWidget->setObjectName("centralWidget");
        horizontalLayout_7 = new QHBoxLayout(centralWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        widget = new Board(centralWidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(375, 375));
        widget->setMaximumSize(QSize(375, 375));

        horizontalLayout_7->addWidget(widget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        dice = new Dice(centralWidget);
        dice->setObjectName("dice");
        dice->setMinimumSize(QSize(75, 75));
        dice->setMaximumSize(QSize(75, 75));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/dices/face1"), QSize(), QIcon::Normal, QIcon::Off);
        dice->setIcon(icon);
        dice->setIconSize(QSize(60, 60));
        dice->setFlat(true);
        dice->setProperty("type", QVariant(1));

        horizontalLayout_6->addWidget(dice);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 35, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        player1 = new Status(centralWidget);
        player1->setObjectName("player1");
        player1->setMinimumSize(QSize(215, 35));
        player1->setMaximumSize(QSize(215, 35));
        player1->setProperty("type", QVariant(1));
        player1->setProperty("turn", QVariant(true));

        verticalLayout->addWidget(player1);

        player2 = new Status(centralWidget);
        player2->setObjectName("player2");
        player2->setMinimumSize(QSize(215, 35));
        player2->setMaximumSize(QSize(215, 35));
        player2->setProperty("type", QVariant(2));

        verticalLayout->addWidget(player2);

        player3 = new Status(centralWidget);
        player3->setObjectName("player3");
        player3->setMinimumSize(QSize(215, 35));
        player3->setMaximumSize(QSize(215, 35));
        player3->setProperty("type", QVariant(3));

        verticalLayout->addWidget(player3);

        player4 = new Status(centralWidget);
        player4->setObjectName("player4");
        player4->setMinimumSize(QSize(215, 35));
        player4->setMaximumSize(QSize(215, 35));
        player4->setProperty("type", QVariant(4));

        verticalLayout->addWidget(player4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_7->addLayout(verticalLayout);

        Ludo->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Ludo);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 626, 17));
        menuGame = new QMenu(menuBar);
        menuGame->setObjectName("menuGame");
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName("menuHelp");
        menuMode = new QMenu(menuBar);
        menuMode->setObjectName("menuMode");
        Ludo->setMenuBar(menuBar);

        menuBar->addAction(menuGame->menuAction());
        menuBar->addAction(menuMode->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuGame->addAction(actionNew);
        menuGame->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuMode->addAction(actionMode2P);
        menuMode->addAction(actionMode3P);
        menuMode->addAction(actionMode4P);

        retranslateUi(Ludo);

        QMetaObject::connectSlotsByName(Ludo);
    } // setupUi

    void retranslateUi(QMainWindow *Ludo)
    {
        Ludo->setWindowTitle(QCoreApplication::translate("Ludo", "Ludo", nullptr));
        actionNew->setText(QCoreApplication::translate("Ludo", "New", nullptr));
        actionQuit->setText(QCoreApplication::translate("Ludo", "Exit", nullptr));
        actionAbout->setText(QCoreApplication::translate("Ludo", "About", nullptr));
        actionMode2P->setText(QCoreApplication::translate("Ludo", "2 Player", nullptr));
        actionMode3P->setText(QCoreApplication::translate("Ludo", "3 Player", nullptr));
        actionMode4P->setText(QCoreApplication::translate("Ludo", "4 Player", nullptr));
        menuGame->setTitle(QCoreApplication::translate("Ludo", "Game", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Ludo", "Help", nullptr));
        menuMode->setTitle(QCoreApplication::translate("Ludo", "Mood", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ludo: public Ui_Ludo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LUDO_H
