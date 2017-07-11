/********************************************************************************
** Form generated from reading UI file 'Vcode.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
** changes would be lost?
********************************************************************************/

#ifndef UI_VCODE_H
#define UI_VCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewClass
{
public:
    QAction *importPicAction;
    QAction *exitAction;
    QAction *action;
    QAction *action_3;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QGraphicsView *leftOriginView;
    QPushButton *recognizeButton;
    QTextBrowser *resultText;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGraphicsView *removeBgView;
    QGraphicsView *binaryzationView;
    QGraphicsView *grayView;
    QGraphicsView *denoiseView;
    QGraphicsView *rightOriginView;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QRadioButton *aveButton;
    QRadioButton *maxbutton;
    QRadioButton *weightAveButton;
    QLabel *label_6;
    QPushButton *confirmButton;
    QMenuBar *menuBar;
    QMenu *file;
    QMenu *help;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ViewClass)
    {
        if (ViewClass->objectName().isEmpty())
            ViewClass->setObjectName(QStringLiteral("ViewClass"));
        ViewClass->resize(1070, 790);
        importPicAction = new QAction(ViewClass);
        importPicAction->setObjectName(QStringLiteral("importPicAction"));
        exitAction = new QAction(ViewClass);
        exitAction->setObjectName(QStringLiteral("exitAction"));
        action = new QAction(ViewClass);
        action->setObjectName(QStringLiteral("action"));
        action_d = new QAction(ViewClass);
        action_d->setObjectName(QStringLiteral("action_d"));                                            //开发者action
        action_3 = new QAction(ViewClass);
        action_3->setObjectName(QStringLiteral("action_3"));
        centralWidget = new QWidget(ViewClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 460, 700));
        leftOriginView = new QGraphicsView(groupBox);
        leftOriginView->setObjectName(QStringLiteral("leftOriginView"));
        leftOriginView->setGeometry(QRect(110, 50, 256, 192));
        recognizeButton = new QPushButton(groupBox);
        recognizeButton->setObjectName(QStringLiteral("recognizeButton"));
        recognizeButton->setGeometry(QRect(190, 270, 93, 28));
        recognizeButton->setStyleSheet(QStringLiteral("font: 12pt \"Agency FB\";"));
        resultText = new QTextBrowser(groupBox);
        resultText->setObjectName(QStringLiteral("resultText"));
        resultText->setGeometry(QRect(110, 450, 260, 200));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 390, 90, 30));
        label->setStyleSheet(QStringLiteral("font: 12pt \"Agency FB\";"));
        label->setFrameShape(QFrame::Box);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(570, 20, 460, 700));
        removeBgView = new QGraphicsView(groupBox_2);
        removeBgView->setObjectName(QStringLiteral("removeBgView"));
        removeBgView->setGeometry(QRect(160, 370, 256, 80));
        binaryzationView = new QGraphicsView(groupBox_2);
        binaryzationView->setObjectName(QStringLiteral("binaryzationView"));
        binaryzationView->setGeometry(QRect(160, 480, 256, 80));
        grayView = new QGraphicsView(groupBox_2);
        grayView->setObjectName(QStringLiteral("grayView"));
        grayView->setGeometry(QRect(160, 260, 256, 80));
        denoiseView = new QGraphicsView(groupBox_2);
        denoiseView->setObjectName(QStringLiteral("denoiseView"));
        denoiseView->setGeometry(QRect(160, 590, 256, 80));
        rightOriginView = new QGraphicsView(groupBox_2);
        rightOriginView->setObjectName(QStringLiteral("rightOriginView"));
        rightOriginView->setGeometry(QRect(160, 41, 256, 170));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(35, 380, 100, 50));
        label_4->setStyleSheet(QStringLiteral("font: 14pt \"Agency FB\";"));
        label_4->setFrameShape(QFrame::Box);
        label_4->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(35, 490, 100, 50));
        label_3->setStyleSheet(QStringLiteral("font: 14pt \"Agency FB\";"));
        label_3->setFrameShape(QFrame::Box);
        label_3->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(35, 600, 100, 50));
        label_2->setStyleSheet(QStringLiteral("font: 14pt \"Agency FB\";"));
        label_2->setFrameShape(QFrame::Box);
        label_2->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(35, 280, 100, 50));
        label_5->setStyleSheet(QStringLiteral("font: 14pt \"Agency FB\";"));
        label_5->setFrameShape(QFrame::Box);
        label_5->setFrameShadow(QFrame::Plain);
        label_5->setLineWidth(1);
        label_5->setTextFormat(Qt::AutoText);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(false);
        aveButton = new QRadioButton(groupBox_2);
        aveButton->setObjectName(QStringLiteral("aveButton"));
        aveButton->setGeometry(QRect(30, 120, 115, 20));
        aveButton->setStyleSheet(QStringLiteral("font: 12pt \"Agency FB\";"));
        maxbutton = new QRadioButton(groupBox_2);
        maxbutton->setObjectName(QStringLiteral("maxbutton"));
        maxbutton->setGeometry(QRect(30, 150, 115, 20));
        maxbutton->setStyleSheet(QStringLiteral("font: 12pt \"Agency FB\";"));
        weightAveButton = new QRadioButton(groupBox_2);
        weightAveButton->setObjectName(QStringLiteral("weightAveButton"));
        weightAveButton->setGeometry(QRect(30, 180, 115, 20));
        weightAveButton->setStyleSheet(QStringLiteral("font: 12pt \"Agency FB\";"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 50, 80, 20));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\"\357\274\233"));
        confirmButton = new QPushButton(groupBox_2);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));
        confirmButton->setGeometry(QRect(40, 210, 93, 28));
        ViewClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ViewClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1070, 25));
        file = new QMenu(menuBar);
        file->setObjectName(QStringLiteral("file"));
        help = new QMenu(menuBar);
        help->setObjectName(QStringLiteral("help"));
        developer = new QMenu(menuBar); //开发者信息
        developer->setObjectName(QStringLiteral("developer"));
        ViewClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ViewClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ViewClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ViewClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ViewClass->setStatusBar(statusBar);

        menuBar->addAction(file->menuAction());
        menuBar->addAction(help->menuAction());
        menuBar->addAction(developer->menuAction());    //
        file->addAction(importPicAction);
        file->addSeparator();
        file->addAction(exitAction);
        help->addAction(action);
        help->addSeparator();
        help->addAction(action_3);
        developer->addAction(action);   //
        developer->addSeparator();
        developer->addAction(action_d);
        retranslateUi(ViewClass);

        QMetaObject::connectSlotsByName(ViewClass);
    } // setupUi

    void retranslateUi(QMainWindow *ViewClass)
    {
        ViewClass->setWindowTitle(QApplication::translate("ViewClass", "App", 0));
        importPicAction->setText(QApplication::translate("ViewClass", "\345\257\274\345\205\245\345\233\276\347\211\207", 0));
        exitAction->setText(QApplication::translate("ViewClass", "\351\200\200\345\207\272", 0));
        action->setText(QApplication::translate("ViewClass", "\346\215\220\345\212\251", 0));
        action_3->setText(QApplication::translate("ViewClass", "\345\205\263\344\272\216", 0));
        action_d->setText(QApplication::translate("ViewClass", "\345\205\263\344\272\216", 0)); //显示帮助信息
        groupBox->setTitle(QString());
        recognizeButton->setText(QApplication::translate("ViewClass", "\345\274\200\345\247\213\350\257\206\345\210\253", 0));
        label->setText(QApplication::translate("ViewClass", "\350\257\206\345\210\253\347\273\223\346\236\234", 0));
        groupBox_2->setTitle(QString());
        label_4->setText(QApplication::translate("ViewClass", "\345\216\273\350\203\214\346\231\257", 0));
        label_3->setText(QApplication::translate("ViewClass", "\344\272\214\345\200\274\345\214\226", 0));
        label_2->setText(QApplication::translate("ViewClass", "\345\216\273\345\231\252\347\202\271", 0));
        label_5->setText(QApplication::translate("ViewClass", "\347\201\260\345\272\246", 0));
        aveButton->setText(QApplication::translate("ViewClass", "\345\271\263\345\235\207\345\200\274\346\263\225", 0));
        maxbutton->setText(QApplication::translate("ViewClass", "\346\234\200\345\244\247\345\200\274\346\263\225", 0));
        weightAveButton->setText(QApplication::translate("ViewClass", "\345\212\240\346\235\203\345\271\263\345\235\207", 0));
        label_6->setText(QApplication::translate("ViewClass", "\347\201\260\345\272\246\346\226\271\345\274\217", 0));
        confirmButton->setText(QApplication::translate("ViewClass", "\347\241\256\345\256\232", 0));
        file->setTitle(QApplication::translate("ViewClass", "\346\226\207\344\273\266", 0));
        help->setTitle(QApplication::translate("ViewClass", "\345\270\256\345\212\251", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewClass: public Ui_ViewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VCODE_H
