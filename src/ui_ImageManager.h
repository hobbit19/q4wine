/********************************************************************************
** Form generated from reading UI file 'ImageManager.ui'
**
** Created: Mon Feb 15 09:49:50 2010
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEMANAGER_H
#define UI_IMAGEMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageManager
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_7;
    QHBoxLayout *hboxLayout;
    QLabel *lblCaption;
    QSpacerItem *spacerItem;
    QLabel *lblLogo;
    QFrame *line;
    QWidget *tlbManager;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableImage;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *lblPathInfo;
    QHBoxLayout *hboxLayout1;
    QPushButton *cmdHelp;
    QSpacerItem *spacerItem1;
    QPushButton *cmdOk;

    void setupUi(QDialog *ImageManager)
    {
        if (ImageManager->objectName().isEmpty())
            ImageManager->setObjectName(QString::fromUtf8("ImageManager"));
        ImageManager->setWindowModality(Qt::WindowModal);
        ImageManager->resize(640, 370);
        ImageManager->setMinimumSize(QSize(340, 370));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/data/q4wine.png"), QSize(), QIcon::Normal, QIcon::Off);
        ImageManager->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(ImageManager);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_7 = new QWidget(ImageManager);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        widget_7->setPalette(palette);
        widget_7->setAutoFillBackground(true);
        hboxLayout = new QHBoxLayout(widget_7);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(18, -1, -1, -1);
        lblCaption = new QLabel(widget_7);
        lblCaption->setObjectName(QString::fromUtf8("lblCaption"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        lblCaption->setFont(font);

        hboxLayout->addWidget(lblCaption);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        lblLogo = new QLabel(widget_7);
        lblLogo->setObjectName(QString::fromUtf8("lblLogo"));
        lblLogo->setPixmap(QPixmap(QString::fromUtf8(":/data/iso_manager.png")));

        hboxLayout->addWidget(lblLogo);


        verticalLayout_3->addWidget(widget_7);

        line = new QFrame(ImageManager);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        tlbManager = new QWidget(ImageManager);
        tlbManager->setObjectName(QString::fromUtf8("tlbManager"));

        verticalLayout_3->addWidget(tlbManager);

        widget = new QWidget(ImageManager);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        tableImage = new QTableWidget(widget);
        if (tableImage->columnCount() < 2)
            tableImage->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableImage->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableImage->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableImage->setObjectName(QString::fromUtf8("tableImage"));
        tableImage->setMaximumSize(QSize(16777215, 16777215));
        tableImage->setContextMenuPolicy(Qt::CustomContextMenu);
        tableImage->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableImage->setSelectionMode(QAbstractItemView::SingleSelection);
        tableImage->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(tableImage);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblPathInfo = new QLabel(groupBox);
        lblPathInfo->setObjectName(QString::fromUtf8("lblPathInfo"));
        lblPathInfo->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lblPathInfo, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        cmdHelp = new QPushButton(widget);
        cmdHelp->setObjectName(QString::fromUtf8("cmdHelp"));

        hboxLayout1->addWidget(cmdHelp);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        cmdOk = new QPushButton(widget);
        cmdOk->setObjectName(QString::fromUtf8("cmdOk"));

        hboxLayout1->addWidget(cmdOk);


        verticalLayout_2->addLayout(hboxLayout1);


        verticalLayout_3->addWidget(widget);


        retranslateUi(ImageManager);

        QMetaObject::connectSlotsByName(ImageManager);
    } // setupUi

    void retranslateUi(QDialog *ImageManager)
    {
        ImageManager->setWindowTitle(QApplication::translate("ImageManager", "CD Image Manager", 0, QApplication::UnicodeUTF8));
        lblCaption->setText(QApplication::translate("ImageManager", "CD Image Manager", 0, QApplication::UnicodeUTF8));
        lblLogo->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableImage->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ImageManager", "CD image name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableImage->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ImageManager", "Size", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        lblPathInfo->setText(QApplication::translate("ImageManager", "File path:", 0, QApplication::UnicodeUTF8));
        cmdHelp->setText(QApplication::translate("ImageManager", "Help", 0, QApplication::UnicodeUTF8));
        cmdOk->setText(QApplication::translate("ImageManager", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ImageManager: public Ui_ImageManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEMANAGER_H