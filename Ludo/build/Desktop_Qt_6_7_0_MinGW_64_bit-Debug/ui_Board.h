/********************************************************************************
** Form generated from reading UI file 'Board.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARD_H
#define UI_BOARD_H

#include <Home.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <Tile.h>

QT_BEGIN_NAMESPACE

class Ui_Board
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *topRow;
    QWidget *blueSquare;
    QHBoxLayout *horizontalLayout_2;
    Home *blueHome;
    QGridLayout *redWalk;
    Tile *tile00;
    Tile *tile01;
    Tile *tile02;
    Tile *tile51;
    Tile *center00;
    Tile *tile03;
    Tile *tile50;
    Tile *center01;
    Tile *tile04;
    Tile *tile49;
    Tile *center02;
    Tile *tile05;
    Tile *tile48;
    Tile *center03;
    Tile *tile06;
    Tile *tile47;
    Tile *center04;
    Tile *tile07;
    QWidget *redSquare;
    QHBoxLayout *horizontalLayout;
    Home *redHome;
    QHBoxLayout *middleRow;
    QGridLayout *blueWalk;
    Tile *tile41;
    Tile *tile42;
    Tile *tile43;
    Tile *tile44;
    Tile *tile45;
    Tile *tile46;
    Tile *tile40;
    Tile *center15;
    Tile *center16;
    Tile *center17;
    Tile *center18;
    Tile *center19;
    Tile *tile39;
    Tile *tile38;
    Tile *tile37;
    Tile *tile36;
    Tile *tile35;
    Tile *tile34;
    QLabel *centerPiece;
    QGridLayout *greenWalk;
    Tile *center06;
    Tile *tile14;
    Tile *center07;
    Tile *tile20;
    Tile *tile08;
    Tile *tile09;
    Tile *tile10;
    Tile *tile11;
    Tile *tile12;
    Tile *tile13;
    Tile *center09;
    Tile *center08;
    Tile *tile18;
    Tile *tile17;
    Tile *tile16;
    Tile *tile15;
    Tile *center05;
    Tile *tile19;
    QHBoxLayout *bottomRow;
    QWidget *yellowSquare;
    QHBoxLayout *horizontalLayout_5;
    Home *yellowHome;
    QGridLayout *yellowWalk;
    Tile *tile33;
    Tile *tile22;
    Tile *tile21;
    Tile *center14;
    Tile *tile32;
    Tile *center13;
    Tile *tile31;
    Tile *center12;
    Tile *tile23;
    Tile *tile30;
    Tile *center11;
    Tile *tile24;
    Tile *tile29;
    Tile *center10;
    Tile *tile25;
    Tile *tile28;
    Tile *tile27;
    Tile *tile26;
    QWidget *greenSquare;
    QHBoxLayout *horizontalLayout_6;
    Home *greenHome;

    void setupUi(QWidget *Board)
    {
        if (Board->objectName().isEmpty())
            Board->setObjectName("Board");
        Board->resize(381, 387);
        verticalLayout = new QVBoxLayout(Board);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topRow = new QHBoxLayout();
        topRow->setSpacing(0);
        topRow->setObjectName("topRow");
        blueSquare = new QWidget(Board);
        blueSquare->setObjectName("blueSquare");
        blueSquare->setMinimumSize(QSize(150, 150));
        blueSquare->setMaximumSize(QSize(150, 150));
        blueSquare->setStyleSheet(QString::fromUtf8("background-color: #3333ff;"));
        horizontalLayout_2 = new QHBoxLayout(blueSquare);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        blueHome = new Home(blueSquare);
        blueHome->setObjectName("blueHome");
        blueHome->setProperty("type", QVariant(4));

        horizontalLayout_2->addWidget(blueHome);


        topRow->addWidget(blueSquare);

        redWalk = new QGridLayout();
        redWalk->setSpacing(0);
        redWalk->setObjectName("redWalk");
        tile00 = new Tile(Board);
        tile00->setObjectName("tile00");
        tile00->setMinimumSize(QSize(25, 25));
        tile00->setMaximumSize(QSize(25, 25));
        tile00->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile00->setIconSize(QSize(25, 25));
        tile00->setFlat(true);

        redWalk->addWidget(tile00, 0, 0, 1, 1);

        tile01 = new Tile(Board);
        tile01->setObjectName("tile01");
        tile01->setMinimumSize(QSize(25, 25));
        tile01->setMaximumSize(QSize(25, 25));
        tile01->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile01->setIconSize(QSize(25, 25));
        tile01->setFlat(true);

        redWalk->addWidget(tile01, 0, 1, 1, 1);

        tile02 = new Tile(Board);
        tile02->setObjectName("tile02");
        tile02->setMinimumSize(QSize(25, 25));
        tile02->setMaximumSize(QSize(25, 25));
        tile02->setStyleSheet(QString::fromUtf8("border-width: 1px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile02->setIconSize(QSize(25, 25));
        tile02->setFlat(true);

        redWalk->addWidget(tile02, 0, 2, 1, 1);

        tile51 = new Tile(Board);
        tile51->setObjectName("tile51");
        tile51->setMinimumSize(QSize(25, 25));
        tile51->setMaximumSize(QSize(25, 25));
        tile51->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile51->setIconSize(QSize(25, 25));
        tile51->setFlat(true);

        redWalk->addWidget(tile51, 1, 0, 1, 1);

        center00 = new Tile(Board);
        center00->setObjectName("center00");
        center00->setMinimumSize(QSize(25, 25));
        center00->setMaximumSize(QSize(25, 25));
        center00->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ff3333;\n"
""));
        center00->setIconSize(QSize(25, 25));
        center00->setFlat(true);
        center00->setProperty("safe", QVariant(true));

        redWalk->addWidget(center00, 1, 1, 1, 1);

        tile03 = new Tile(Board);
        tile03->setObjectName("tile03");
        tile03->setMinimumSize(QSize(25, 25));
        tile03->setMaximumSize(QSize(25, 25));
        tile03->setStyleSheet(QString::fromUtf8("border-width: 0px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ff3333;\n"
""));
        tile03->setIconSize(QSize(25, 25));
        tile03->setFlat(true);
        tile03->setProperty("safe", QVariant(true));

        redWalk->addWidget(tile03, 1, 2, 1, 1);

        tile50 = new Tile(Board);
        tile50->setObjectName("tile50");
        tile50->setMinimumSize(QSize(25, 25));
        tile50->setMaximumSize(QSize(25, 25));
        tile50->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile50->setIconSize(QSize(25, 25));
        tile50->setFlat(true);

        redWalk->addWidget(tile50, 2, 0, 1, 1);

        center01 = new Tile(Board);
        center01->setObjectName("center01");
        center01->setMinimumSize(QSize(25, 25));
        center01->setMaximumSize(QSize(25, 25));
        center01->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ff3333;\n"
""));
        center01->setIconSize(QSize(25, 25));
        center01->setFlat(true);
        center01->setProperty("safe", QVariant(true));

        redWalk->addWidget(center01, 2, 1, 1, 1);

        tile04 = new Tile(Board);
        tile04->setObjectName("tile04");
        tile04->setMinimumSize(QSize(25, 25));
        tile04->setMaximumSize(QSize(25, 25));
        tile04->setStyleSheet(QString::fromUtf8("border-width: 0px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile04->setIconSize(QSize(25, 25));
        tile04->setFlat(true);

        redWalk->addWidget(tile04, 2, 2, 1, 1);

        tile49 = new Tile(Board);
        tile49->setObjectName("tile49");
        tile49->setMinimumSize(QSize(25, 25));
        tile49->setMaximumSize(QSize(25, 25));
        tile49->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile49->setIconSize(QSize(25, 25));
        tile49->setFlat(true);

        redWalk->addWidget(tile49, 3, 0, 1, 1);

        center02 = new Tile(Board);
        center02->setObjectName("center02");
        center02->setMinimumSize(QSize(25, 25));
        center02->setMaximumSize(QSize(25, 25));
        center02->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ff3333;\n"
""));
        center02->setIconSize(QSize(25, 25));
        center02->setFlat(true);
        center02->setProperty("safe", QVariant(true));

        redWalk->addWidget(center02, 3, 1, 1, 1);

        tile05 = new Tile(Board);
        tile05->setObjectName("tile05");
        tile05->setMinimumSize(QSize(25, 25));
        tile05->setMaximumSize(QSize(25, 25));
        tile05->setStyleSheet(QString::fromUtf8("border-width: 0px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile05->setIconSize(QSize(25, 25));
        tile05->setFlat(true);

        redWalk->addWidget(tile05, 3, 2, 1, 1);

        tile48 = new Tile(Board);
        tile48->setObjectName("tile48");
        tile48->setMinimumSize(QSize(25, 25));
        tile48->setMaximumSize(QSize(25, 25));
        tile48->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile48->setIconSize(QSize(25, 25));
        tile48->setFlat(true);

        redWalk->addWidget(tile48, 4, 0, 1, 1);

        center03 = new Tile(Board);
        center03->setObjectName("center03");
        center03->setMinimumSize(QSize(25, 25));
        center03->setMaximumSize(QSize(25, 25));
        center03->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ff3333;\n"
""));
        center03->setIconSize(QSize(25, 25));
        center03->setFlat(true);
        center03->setProperty("safe", QVariant(true));

        redWalk->addWidget(center03, 4, 1, 1, 1);

        tile06 = new Tile(Board);
        tile06->setObjectName("tile06");
        tile06->setMinimumSize(QSize(25, 25));
        tile06->setMaximumSize(QSize(25, 25));
        tile06->setStyleSheet(QString::fromUtf8("border-width: 0px 0px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile06->setIconSize(QSize(25, 25));
        tile06->setFlat(true);

        redWalk->addWidget(tile06, 4, 2, 1, 1);

        tile47 = new Tile(Board);
        tile47->setObjectName("tile47");
        tile47->setMinimumSize(QSize(25, 25));
        tile47->setMaximumSize(QSize(25, 25));
        tile47->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile47->setIconSize(QSize(25, 25));
        tile47->setFlat(true);

        redWalk->addWidget(tile47, 5, 0, 1, 1);

        center04 = new Tile(Board);
        center04->setObjectName("center04");
        center04->setMinimumSize(QSize(25, 25));
        center04->setMaximumSize(QSize(25, 25));
        center04->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ff3333;\n"
""));
        center04->setIconSize(QSize(25, 25));
        center04->setFlat(true);
        center04->setProperty("safe", QVariant(true));

        redWalk->addWidget(center04, 5, 1, 1, 1);

        tile07 = new Tile(Board);
        tile07->setObjectName("tile07");
        tile07->setMinimumSize(QSize(25, 25));
        tile07->setMaximumSize(QSize(25, 25));
        tile07->setStyleSheet(QString::fromUtf8("border-width: 1px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile07->setIconSize(QSize(25, 25));
        tile07->setFlat(true);

        redWalk->addWidget(tile07, 5, 2, 1, 1);


        topRow->addLayout(redWalk);

        redSquare = new QWidget(Board);
        redSquare->setObjectName("redSquare");
        redSquare->setMinimumSize(QSize(150, 150));
        redSquare->setMaximumSize(QSize(150, 150));
        redSquare->setStyleSheet(QString::fromUtf8("background-color: #ff3333;"));
        horizontalLayout = new QHBoxLayout(redSquare);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        redHome = new Home(redSquare);
        redHome->setObjectName("redHome");
        redHome->setProperty("type", QVariant(1));

        horizontalLayout->addWidget(redHome);


        topRow->addWidget(redSquare);


        verticalLayout->addLayout(topRow);

        middleRow = new QHBoxLayout();
        middleRow->setSpacing(0);
        middleRow->setObjectName("middleRow");
        blueWalk = new QGridLayout();
        blueWalk->setSpacing(0);
        blueWalk->setObjectName("blueWalk");
        tile41 = new Tile(Board);
        tile41->setObjectName("tile41");
        tile41->setMinimumSize(QSize(25, 25));
        tile41->setMaximumSize(QSize(25, 25));
        tile41->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile41->setIconSize(QSize(25, 25));
        tile41->setFlat(true);

        blueWalk->addWidget(tile41, 0, 0, 1, 1);

        tile42 = new Tile(Board);
        tile42->setObjectName("tile42");
        tile42->setMinimumSize(QSize(25, 25));
        tile42->setMaximumSize(QSize(25, 25));
        tile42->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #3333ff;\n"
""));
        tile42->setIconSize(QSize(25, 25));
        tile42->setFlat(true);
        tile42->setProperty("safe", QVariant(true));

        blueWalk->addWidget(tile42, 0, 1, 1, 1);

        tile43 = new Tile(Board);
        tile43->setObjectName("tile43");
        tile43->setMinimumSize(QSize(25, 25));
        tile43->setMaximumSize(QSize(25, 25));
        tile43->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile43->setIconSize(QSize(25, 25));
        tile43->setFlat(true);

        blueWalk->addWidget(tile43, 0, 2, 1, 1);

        tile44 = new Tile(Board);
        tile44->setObjectName("tile44");
        tile44->setMinimumSize(QSize(25, 25));
        tile44->setMaximumSize(QSize(25, 25));
        tile44->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile44->setIconSize(QSize(25, 25));
        tile44->setFlat(true);

        blueWalk->addWidget(tile44, 0, 3, 1, 1);

        tile45 = new Tile(Board);
        tile45->setObjectName("tile45");
        tile45->setMinimumSize(QSize(25, 25));
        tile45->setMaximumSize(QSize(25, 25));
        tile45->setStyleSheet(QString::fromUtf8("border-width: 0px 0px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile45->setIconSize(QSize(25, 25));
        tile45->setFlat(true);

        blueWalk->addWidget(tile45, 0, 4, 1, 1);

        tile46 = new Tile(Board);
        tile46->setObjectName("tile46");
        tile46->setMinimumSize(QSize(25, 25));
        tile46->setMaximumSize(QSize(25, 25));
        tile46->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile46->setIconSize(QSize(25, 25));
        tile46->setFlat(true);

        blueWalk->addWidget(tile46, 0, 5, 1, 1);

        tile40 = new Tile(Board);
        tile40->setObjectName("tile40");
        tile40->setMinimumSize(QSize(25, 25));
        tile40->setMaximumSize(QSize(25, 25));
        tile40->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile40->setIconSize(QSize(25, 25));
        tile40->setFlat(true);

        blueWalk->addWidget(tile40, 1, 0, 1, 1);

        center15 = new Tile(Board);
        center15->setObjectName("center15");
        center15->setMinimumSize(QSize(25, 25));
        center15->setMaximumSize(QSize(25, 25));
        center15->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #3333ff;\n"
""));
        center15->setIconSize(QSize(25, 25));
        center15->setFlat(true);
        center15->setProperty("safe", QVariant(true));

        blueWalk->addWidget(center15, 1, 1, 1, 1);

        center16 = new Tile(Board);
        center16->setObjectName("center16");
        center16->setMinimumSize(QSize(25, 25));
        center16->setMaximumSize(QSize(25, 25));
        center16->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #3333ff;\n"
""));
        center16->setIconSize(QSize(25, 25));
        center16->setFlat(true);
        center16->setProperty("safe", QVariant(true));

        blueWalk->addWidget(center16, 1, 2, 1, 1);

        center17 = new Tile(Board);
        center17->setObjectName("center17");
        center17->setMinimumSize(QSize(25, 25));
        center17->setMaximumSize(QSize(25, 25));
        center17->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #3333ff;\n"
""));
        center17->setIconSize(QSize(25, 25));
        center17->setFlat(true);
        center17->setProperty("safe", QVariant(true));

        blueWalk->addWidget(center17, 1, 3, 1, 1);

        center18 = new Tile(Board);
        center18->setObjectName("center18");
        center18->setMinimumSize(QSize(25, 25));
        center18->setMaximumSize(QSize(25, 25));
        center18->setStyleSheet(QString::fromUtf8("border-width: 1px 0px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #3333ff;\n"
""));
        center18->setIconSize(QSize(25, 25));
        center18->setFlat(true);
        center18->setProperty("safe", QVariant(true));

        blueWalk->addWidget(center18, 1, 4, 1, 1);

        center19 = new Tile(Board);
        center19->setObjectName("center19");
        center19->setMinimumSize(QSize(25, 25));
        center19->setMaximumSize(QSize(25, 25));
        center19->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #3333ff;\n"
""));
        center19->setIconSize(QSize(25, 25));
        center19->setFlat(true);
        center19->setProperty("safe", QVariant(true));

        blueWalk->addWidget(center19, 1, 5, 1, 1);

        tile39 = new Tile(Board);
        tile39->setObjectName("tile39");
        tile39->setMinimumSize(QSize(25, 25));
        tile39->setMaximumSize(QSize(25, 25));
        tile39->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile39->setIconSize(QSize(25, 25));
        tile39->setFlat(true);

        blueWalk->addWidget(tile39, 2, 0, 1, 1);

        tile38 = new Tile(Board);
        tile38->setObjectName("tile38");
        tile38->setMinimumSize(QSize(25, 25));
        tile38->setMaximumSize(QSize(25, 25));
        tile38->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile38->setIconSize(QSize(25, 25));
        tile38->setFlat(true);

        blueWalk->addWidget(tile38, 2, 1, 1, 1);

        tile37 = new Tile(Board);
        tile37->setObjectName("tile37");
        tile37->setMinimumSize(QSize(25, 25));
        tile37->setMaximumSize(QSize(25, 25));
        tile37->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile37->setIconSize(QSize(25, 25));
        tile37->setFlat(true);

        blueWalk->addWidget(tile37, 2, 2, 1, 1);

        tile36 = new Tile(Board);
        tile36->setObjectName("tile36");
        tile36->setMinimumSize(QSize(25, 25));
        tile36->setMaximumSize(QSize(25, 25));
        tile36->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile36->setIconSize(QSize(25, 25));
        tile36->setFlat(true);

        blueWalk->addWidget(tile36, 2, 3, 1, 1);

        tile35 = new Tile(Board);
        tile35->setObjectName("tile35");
        tile35->setMinimumSize(QSize(25, 25));
        tile35->setMaximumSize(QSize(25, 25));
        tile35->setStyleSheet(QString::fromUtf8("border-width: 1px 0px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile35->setIconSize(QSize(25, 25));
        tile35->setFlat(true);

        blueWalk->addWidget(tile35, 2, 4, 1, 1);

        tile34 = new Tile(Board);
        tile34->setObjectName("tile34");
        tile34->setMinimumSize(QSize(25, 25));
        tile34->setMaximumSize(QSize(25, 25));
        tile34->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile34->setIconSize(QSize(25, 25));
        tile34->setFlat(true);

        blueWalk->addWidget(tile34, 2, 5, 1, 1);


        middleRow->addLayout(blueWalk);

        centerPiece = new QLabel(Board);
        centerPiece->setObjectName("centerPiece");
        centerPiece->setMinimumSize(QSize(75, 75));
        centerPiece->setMaximumSize(QSize(75, 75));
        centerPiece->setStyleSheet(QString::fromUtf8("border-width: 37px 37px 38px 38px;\n"
"border-style: solid;\n"
"border-color: #ff3333 #33ff33 #ffff33 #3333ff;\n"
"width: 80px;\n"
"height: 80px;"));

        middleRow->addWidget(centerPiece);

        greenWalk = new QGridLayout();
        greenWalk->setSpacing(0);
        greenWalk->setObjectName("greenWalk");
        center06 = new Tile(Board);
        center06->setObjectName("center06");
        center06->setMinimumSize(QSize(25, 25));
        center06->setMaximumSize(QSize(25, 25));
        center06->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #33ff33;\n"
""));
        center06->setIconSize(QSize(25, 25));
        center06->setFlat(true);
        center06->setProperty("safe", QVariant(true));

        greenWalk->addWidget(center06, 1, 3, 1, 1);

        tile14 = new Tile(Board);
        tile14->setObjectName("tile14");
        tile14->setMinimumSize(QSize(25, 25));
        tile14->setMaximumSize(QSize(25, 25));
        tile14->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile14->setIconSize(QSize(25, 25));
        tile14->setFlat(true);

        greenWalk->addWidget(tile14, 1, 5, 1, 1);

        center07 = new Tile(Board);
        center07->setObjectName("center07");
        center07->setMinimumSize(QSize(25, 25));
        center07->setMaximumSize(QSize(25, 25));
        center07->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #33ff33;\n"
""));
        center07->setIconSize(QSize(25, 25));
        center07->setFlat(true);
        center07->setProperty("safe", QVariant(true));

        greenWalk->addWidget(center07, 1, 2, 1, 1);

        tile20 = new Tile(Board);
        tile20->setObjectName("tile20");
        tile20->setMinimumSize(QSize(25, 25));
        tile20->setMaximumSize(QSize(25, 25));
        tile20->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile20->setIconSize(QSize(25, 25));
        tile20->setFlat(true);

        greenWalk->addWidget(tile20, 2, 0, 1, 1);

        tile08 = new Tile(Board);
        tile08->setObjectName("tile08");
        tile08->setMinimumSize(QSize(25, 25));
        tile08->setMaximumSize(QSize(25, 25));
        tile08->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile08->setIconSize(QSize(25, 25));
        tile08->setFlat(true);

        greenWalk->addWidget(tile08, 0, 0, 1, 1);

        tile09 = new Tile(Board);
        tile09->setObjectName("tile09");
        tile09->setMinimumSize(QSize(25, 25));
        tile09->setMaximumSize(QSize(25, 25));
        tile09->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile09->setIconSize(QSize(25, 25));
        tile09->setFlat(true);

        greenWalk->addWidget(tile09, 0, 1, 1, 1);

        tile10 = new Tile(Board);
        tile10->setObjectName("tile10");
        tile10->setMinimumSize(QSize(25, 25));
        tile10->setMaximumSize(QSize(25, 25));
        tile10->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile10->setIconSize(QSize(25, 25));
        tile10->setFlat(true);

        greenWalk->addWidget(tile10, 0, 2, 1, 1);

        tile11 = new Tile(Board);
        tile11->setObjectName("tile11");
        tile11->setMinimumSize(QSize(25, 25));
        tile11->setMaximumSize(QSize(25, 25));
        tile11->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile11->setIconSize(QSize(25, 25));
        tile11->setFlat(true);

        greenWalk->addWidget(tile11, 0, 3, 1, 1);

        tile12 = new Tile(Board);
        tile12->setObjectName("tile12");
        tile12->setMinimumSize(QSize(25, 25));
        tile12->setMaximumSize(QSize(25, 25));
        tile12->setStyleSheet(QString::fromUtf8("border-width: 0px 0px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile12->setIconSize(QSize(25, 25));
        tile12->setFlat(true);

        greenWalk->addWidget(tile12, 0, 4, 1, 1);

        tile13 = new Tile(Board);
        tile13->setObjectName("tile13");
        tile13->setMinimumSize(QSize(25, 25));
        tile13->setMaximumSize(QSize(25, 25));
        tile13->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile13->setIconSize(QSize(25, 25));
        tile13->setFlat(true);

        greenWalk->addWidget(tile13, 0, 5, 1, 1);

        center09 = new Tile(Board);
        center09->setObjectName("center09");
        center09->setMinimumSize(QSize(25, 25));
        center09->setMaximumSize(QSize(25, 25));
        center09->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #33ff33;\n"
""));
        center09->setIconSize(QSize(25, 25));
        center09->setFlat(true);
        center09->setProperty("safe", QVariant(true));

        greenWalk->addWidget(center09, 1, 0, 1, 1);

        center08 = new Tile(Board);
        center08->setObjectName("center08");
        center08->setMinimumSize(QSize(25, 25));
        center08->setMaximumSize(QSize(25, 25));
        center08->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #33ff33;\n"
""));
        center08->setIconSize(QSize(25, 25));
        center08->setFlat(true);
        center08->setProperty("safe", QVariant(true));

        greenWalk->addWidget(center08, 1, 1, 1, 1);

        tile18 = new Tile(Board);
        tile18->setObjectName("tile18");
        tile18->setMinimumSize(QSize(25, 25));
        tile18->setMaximumSize(QSize(25, 25));
        tile18->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile18->setIconSize(QSize(25, 25));
        tile18->setFlat(true);

        greenWalk->addWidget(tile18, 2, 2, 1, 1);

        tile17 = new Tile(Board);
        tile17->setObjectName("tile17");
        tile17->setMinimumSize(QSize(25, 25));
        tile17->setMaximumSize(QSize(25, 25));
        tile17->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile17->setIconSize(QSize(25, 25));
        tile17->setFlat(true);

        greenWalk->addWidget(tile17, 2, 3, 1, 1);

        tile16 = new Tile(Board);
        tile16->setObjectName("tile16");
        tile16->setMinimumSize(QSize(25, 25));
        tile16->setMaximumSize(QSize(25, 25));
        tile16->setStyleSheet(QString::fromUtf8("border-width: 1px 0px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #33ff33;\n"
""));
        tile16->setIconSize(QSize(25, 25));
        tile16->setFlat(true);
        tile16->setProperty("safe", QVariant(true));

        greenWalk->addWidget(tile16, 2, 4, 1, 1);

        tile15 = new Tile(Board);
        tile15->setObjectName("tile15");
        tile15->setMinimumSize(QSize(25, 25));
        tile15->setMaximumSize(QSize(25, 25));
        tile15->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile15->setIconSize(QSize(25, 25));
        tile15->setFlat(true);

        greenWalk->addWidget(tile15, 2, 5, 1, 1);

        center05 = new Tile(Board);
        center05->setObjectName("center05");
        center05->setMinimumSize(QSize(25, 25));
        center05->setMaximumSize(QSize(25, 25));
        center05->setStyleSheet(QString::fromUtf8("border-width: 1px 0px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #33ff33;\n"
""));
        center05->setIconSize(QSize(25, 25));
        center05->setFlat(true);
        center05->setProperty("safe", QVariant(true));

        greenWalk->addWidget(center05, 1, 4, 1, 1);

        tile19 = new Tile(Board);
        tile19->setObjectName("tile19");
        tile19->setMinimumSize(QSize(25, 25));
        tile19->setMaximumSize(QSize(25, 25));
        tile19->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile19->setIconSize(QSize(25, 25));
        tile19->setFlat(true);

        greenWalk->addWidget(tile19, 2, 1, 1, 1);


        middleRow->addLayout(greenWalk);


        verticalLayout->addLayout(middleRow);

        bottomRow = new QHBoxLayout();
        bottomRow->setSpacing(0);
        bottomRow->setObjectName("bottomRow");
        yellowSquare = new QWidget(Board);
        yellowSquare->setObjectName("yellowSquare");
        yellowSquare->setMinimumSize(QSize(150, 150));
        yellowSquare->setMaximumSize(QSize(150, 150));
        yellowSquare->setStyleSheet(QString::fromUtf8("background-color: #ffff33;"));
        horizontalLayout_5 = new QHBoxLayout(yellowSquare);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        yellowHome = new Home(yellowSquare);
        yellowHome->setObjectName("yellowHome");
        yellowHome->setProperty("type", QVariant(2));

        horizontalLayout_5->addWidget(yellowHome);


        bottomRow->addWidget(yellowSquare);

        yellowWalk = new QGridLayout();
        yellowWalk->setSpacing(0);
        yellowWalk->setObjectName("yellowWalk");
        tile33 = new Tile(Board);
        tile33->setObjectName("tile33");
        tile33->setMinimumSize(QSize(25, 25));
        tile33->setMaximumSize(QSize(25, 25));
        tile33->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile33->setIconSize(QSize(25, 25));
        tile33->setFlat(true);

        yellowWalk->addWidget(tile33, 0, 0, 1, 1);

        tile22 = new Tile(Board);
        tile22->setObjectName("tile22");
        tile22->setMinimumSize(QSize(25, 25));
        tile22->setMaximumSize(QSize(25, 25));
        tile22->setStyleSheet(QString::fromUtf8("border-width: 0px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile22->setIconSize(QSize(25, 25));
        tile22->setFlat(true);

        yellowWalk->addWidget(tile22, 1, 2, 1, 1);

        tile21 = new Tile(Board);
        tile21->setObjectName("tile21");
        tile21->setMinimumSize(QSize(25, 25));
        tile21->setMaximumSize(QSize(25, 25));
        tile21->setStyleSheet(QString::fromUtf8("border-width: 1px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile21->setIconSize(QSize(25, 25));
        tile21->setFlat(true);

        yellowWalk->addWidget(tile21, 0, 2, 1, 1);

        center14 = new Tile(Board);
        center14->setObjectName("center14");
        center14->setMinimumSize(QSize(25, 25));
        center14->setMaximumSize(QSize(25, 25));
        center14->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ffff33;\n"
""));
        center14->setIconSize(QSize(25, 25));
        center14->setFlat(true);
        center14->setProperty("safe", QVariant(true));

        yellowWalk->addWidget(center14, 0, 1, 1, 1);

        tile32 = new Tile(Board);
        tile32->setObjectName("tile32");
        tile32->setMinimumSize(QSize(25, 25));
        tile32->setMaximumSize(QSize(25, 25));
        tile32->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile32->setIconSize(QSize(25, 25));
        tile32->setFlat(true);

        yellowWalk->addWidget(tile32, 1, 0, 1, 1);

        center13 = new Tile(Board);
        center13->setObjectName("center13");
        center13->setMinimumSize(QSize(25, 25));
        center13->setMaximumSize(QSize(25, 25));
        center13->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ffff33;\n"
""));
        center13->setIconSize(QSize(25, 25));
        center13->setFlat(true);
        center13->setProperty("safe", QVariant(true));

        yellowWalk->addWidget(center13, 1, 1, 1, 1);

        tile31 = new Tile(Board);
        tile31->setObjectName("tile31");
        tile31->setMinimumSize(QSize(25, 25));
        tile31->setMaximumSize(QSize(25, 25));
        tile31->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile31->setIconSize(QSize(25, 25));
        tile31->setFlat(true);

        yellowWalk->addWidget(tile31, 2, 0, 1, 1);

        center12 = new Tile(Board);
        center12->setObjectName("center12");
        center12->setMinimumSize(QSize(25, 25));
        center12->setMaximumSize(QSize(25, 25));
        center12->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ffff33;\n"
""));
        center12->setIconSize(QSize(25, 25));
        center12->setFlat(true);
        center12->setProperty("safe", QVariant(true));

        yellowWalk->addWidget(center12, 2, 1, 1, 1);

        tile23 = new Tile(Board);
        tile23->setObjectName("tile23");
        tile23->setMinimumSize(QSize(25, 25));
        tile23->setMaximumSize(QSize(25, 25));
        tile23->setStyleSheet(QString::fromUtf8("border-width: 0px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile23->setIconSize(QSize(25, 25));
        tile23->setFlat(true);

        yellowWalk->addWidget(tile23, 2, 2, 1, 1);

        tile30 = new Tile(Board);
        tile30->setObjectName("tile30");
        tile30->setMinimumSize(QSize(25, 25));
        tile30->setMaximumSize(QSize(25, 25));
        tile30->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile30->setIconSize(QSize(25, 25));
        tile30->setFlat(true);

        yellowWalk->addWidget(tile30, 3, 0, 1, 1);

        center11 = new Tile(Board);
        center11->setObjectName("center11");
        center11->setMinimumSize(QSize(25, 25));
        center11->setMaximumSize(QSize(25, 25));
        center11->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ffff33;\n"
""));
        center11->setIconSize(QSize(25, 25));
        center11->setFlat(true);
        center11->setProperty("safe", QVariant(true));

        yellowWalk->addWidget(center11, 3, 1, 1, 1);

        tile24 = new Tile(Board);
        tile24->setObjectName("tile24");
        tile24->setMinimumSize(QSize(25, 25));
        tile24->setMaximumSize(QSize(25, 25));
        tile24->setStyleSheet(QString::fromUtf8("border-width: 0px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile24->setIconSize(QSize(25, 25));
        tile24->setFlat(true);

        yellowWalk->addWidget(tile24, 3, 2, 1, 1);

        tile29 = new Tile(Board);
        tile29->setObjectName("tile29");
        tile29->setMinimumSize(QSize(25, 25));
        tile29->setMaximumSize(QSize(25, 25));
        tile29->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ffff33;\n"
""));
        tile29->setIconSize(QSize(25, 25));
        tile29->setFlat(true);
        tile29->setProperty("safe", QVariant(true));

        yellowWalk->addWidget(tile29, 4, 0, 1, 1);

        center10 = new Tile(Board);
        center10->setObjectName("center10");
        center10->setMinimumSize(QSize(25, 25));
        center10->setMaximumSize(QSize(25, 25));
        center10->setStyleSheet(QString::fromUtf8("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ffff33;\n"
""));
        center10->setIconSize(QSize(25, 25));
        center10->setFlat(true);
        center10->setProperty("safe", QVariant(true));

        yellowWalk->addWidget(center10, 4, 1, 1, 1);

        tile25 = new Tile(Board);
        tile25->setObjectName("tile25");
        tile25->setMinimumSize(QSize(25, 25));
        tile25->setMaximumSize(QSize(25, 25));
        tile25->setStyleSheet(QString::fromUtf8("border-width: 0px 0px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile25->setIconSize(QSize(25, 25));
        tile25->setFlat(true);

        yellowWalk->addWidget(tile25, 4, 2, 1, 1);

        tile28 = new Tile(Board);
        tile28->setObjectName("tile28");
        tile28->setMinimumSize(QSize(25, 25));
        tile28->setMaximumSize(QSize(25, 25));
        tile28->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile28->setIconSize(QSize(25, 25));
        tile28->setFlat(true);

        yellowWalk->addWidget(tile28, 5, 0, 1, 1);

        tile27 = new Tile(Board);
        tile27->setObjectName("tile27");
        tile27->setMinimumSize(QSize(25, 25));
        tile27->setMaximumSize(QSize(25, 25));
        tile27->setStyleSheet(QString::fromUtf8("border-width: 1px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile27->setIconSize(QSize(25, 25));
        tile27->setFlat(true);

        yellowWalk->addWidget(tile27, 5, 1, 1, 1);

        tile26 = new Tile(Board);
        tile26->setObjectName("tile26");
        tile26->setMinimumSize(QSize(25, 25));
        tile26->setMaximumSize(QSize(25, 25));
        tile26->setStyleSheet(QString::fromUtf8("border-width: 1px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;\n"
""));
        tile26->setIconSize(QSize(25, 25));
        tile26->setFlat(true);

        yellowWalk->addWidget(tile26, 5, 2, 1, 1);


        bottomRow->addLayout(yellowWalk);

        greenSquare = new QWidget(Board);
        greenSquare->setObjectName("greenSquare");
        greenSquare->setMinimumSize(QSize(150, 150));
        greenSquare->setMaximumSize(QSize(150, 150));
        greenSquare->setStyleSheet(QString::fromUtf8("background-color: #33ff33;"));
        horizontalLayout_6 = new QHBoxLayout(greenSquare);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        greenHome = new Home(greenSquare);
        greenHome->setObjectName("greenHome");
        greenHome->setProperty("type", QVariant(3));

        horizontalLayout_6->addWidget(greenHome);


        bottomRow->addWidget(greenSquare);


        verticalLayout->addLayout(bottomRow);


        retranslateUi(Board);

        QMetaObject::connectSlotsByName(Board);
    } // setupUi

    void retranslateUi(QWidget *Board)
    {
        Board->setWindowTitle(QCoreApplication::translate("Board", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Board: public Ui_Board {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARD_H
