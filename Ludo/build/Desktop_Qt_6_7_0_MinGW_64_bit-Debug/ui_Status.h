/********************************************************************************
** Form generated from reading UI file 'Status.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUS_H
#define UI_STATUS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <Tile.h>

QT_BEGIN_NAMESPACE

class Ui_Status
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *turn;
    QLabel *name;
    Tile *finish0;
    Tile *finish1;
    Tile *finish2;
    Tile *finish3;

    void setupUi(QWidget *Status)
    {
        if (Status->objectName().isEmpty())
            Status->setObjectName("Status");
        Status->resize(215, 36);
        horizontalLayout = new QHBoxLayout(Status);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        turn = new QLabel(Status);
        turn->setObjectName("turn");
        turn->setMinimumSize(QSize(25, 25));
        turn->setMaximumSize(QSize(25, 25));
        turn->setScaledContents(true);

        horizontalLayout->addWidget(turn);

        name = new QLabel(Status);
        name->setObjectName("name");
        name->setMinimumSize(QSize(80, 26));
        name->setMaximumSize(QSize(80, 25));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        name->setFont(font);

        horizontalLayout->addWidget(name);

        finish0 = new Tile(Status);
        finish0->setObjectName("finish0");
        finish0->setMinimumSize(QSize(25, 25));
        finish0->setMaximumSize(QSize(25, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pawns/empty"), QSize(), QIcon::Normal, QIcon::Off);
        finish0->setIcon(icon);
        finish0->setIconSize(QSize(25, 25));
        finish0->setFlat(true);

        horizontalLayout->addWidget(finish0);

        finish1 = new Tile(Status);
        finish1->setObjectName("finish1");
        finish1->setMinimumSize(QSize(25, 25));
        finish1->setMaximumSize(QSize(25, 25));
        finish1->setIcon(icon);
        finish1->setIconSize(QSize(25, 25));
        finish1->setFlat(true);

        horizontalLayout->addWidget(finish1);

        finish2 = new Tile(Status);
        finish2->setObjectName("finish2");
        finish2->setMinimumSize(QSize(25, 25));
        finish2->setMaximumSize(QSize(25, 25));
        finish2->setIcon(icon);
        finish2->setIconSize(QSize(25, 25));
        finish2->setFlat(true);

        horizontalLayout->addWidget(finish2);

        finish3 = new Tile(Status);
        finish3->setObjectName("finish3");
        finish3->setMinimumSize(QSize(25, 25));
        finish3->setMaximumSize(QSize(25, 25));
        finish3->setIcon(icon);
        finish3->setIconSize(QSize(25, 25));
        finish3->setFlat(true);

        horizontalLayout->addWidget(finish3);


        retranslateUi(Status);

        QMetaObject::connectSlotsByName(Status);
    } // setupUi

    void retranslateUi(QWidget *Status)
    {
        Status->setWindowTitle(QCoreApplication::translate("Status", "Form", nullptr));
        name->setText(QCoreApplication::translate("Status", "Player X:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Status: public Ui_Status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUS_H
