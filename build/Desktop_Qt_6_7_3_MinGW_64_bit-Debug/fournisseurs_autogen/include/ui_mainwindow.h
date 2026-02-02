/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *sidebar;
    QVBoxLayout *verticalLayout_2;
    QLabel *logoLabel;
    QLabel *subtitleLabel;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnFournisseurs;
    QPushButton *btnCamions;
    QPushButton *btnPoubelles;
    QPushButton *btnChauffeurs;
    QPushButton *btnDechets;
    QPushButton *btnPointsRecyclage;
    QSpacerItem *verticalSpacer;
    QPushButton *btnExit;
    QStackedWidget *stackedWidget;
    QWidget *pageFournisseurs;
    QVBoxLayout *verticalLayout_main;
    QHBoxLayout *headerLayout;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer_title;
    QLabel *userBadge;
    QHBoxLayout *contentLayout;
    QFrame *formFrame;
    QVBoxLayout *formVBox;
    QLabel *formTitle;
    QFormLayout *formLayout;
    QLabel *labelNom;
    QLineEdit *editNom;
    QLabel *labelContact;
    QLineEdit *editContact;
    QLabel *labelEmail;
    QLineEdit *editEmail;
    QLabel *labelTelephone;
    QLineEdit *editTelephone;
    QLabel *labelAdresse;
    QLineEdit *editAdresse;
    QLabel *labelZone;
    QLineEdit *editZone;
    QSpacerItem *verticalSpacer_form;
    QHBoxLayout *buttonsLayout;
    QPushButton *btnEnregistrer;
    QSpacerItem *horizontalSpacer_buttons;
    QPushButton *btnAnnuler;
    QFrame *tableFrame;
    QVBoxLayout *tableVBox;
    QFrame *toolbarFrame1;
    QHBoxLayout *toolbarLayout1;
    QPushButton *btnAjouter;
    QPushButton *btnModifier;
    QPushButton *btnSupprimer;
    QPushButton *btnPDF;
    QFrame *toolbarFrame2;
    QHBoxLayout *toolbarLayout2;
    QPushButton *btnHistorique;
    QPushButton *btnReclamations;
    QPushButton *btnMail;
    QSpacerItem *horizontalSpacer_search;
    QLineEdit *searchFournisseurs;
    QTableWidget *tableFournisseurs;
    QFrame *statsFrame;
    QHBoxLayout *hboxLayout;
    QLabel *statsLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1300, 700);
        MainWindow->setMinimumSize(QSize(1000, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sidebar = new QFrame(centralwidget);
        sidebar->setObjectName("sidebar");
        sidebar->setMinimumSize(QSize(260, 0));
        sidebar->setMaximumSize(QSize(260, 16777215));
        sidebar->setStyleSheet(QString::fromUtf8("QFrame { background-color: #1e40af; border-right: 2px solid #1e3a8a; }"));
        sidebar->setFrameShape(QFrame::StyledPanel);
        sidebar->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(sidebar);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(20, 25, 20, 25);
        logoLabel = new QLabel(sidebar);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setStyleSheet(QString::fromUtf8("color: #ffffff; font-size: 24px; font-weight: 700; padding-bottom: 5px;"));

        verticalLayout_2->addWidget(logoLabel);

        subtitleLabel = new QLabel(sidebar);
        subtitleLabel->setObjectName("subtitleLabel");
        subtitleLabel->setStyleSheet(QString::fromUtf8("color: #dbeafe; font-size: 14px; padding-bottom: 20px;"));

        verticalLayout_2->addWidget(subtitleLabel);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        btnFournisseurs = new QPushButton(sidebar);
        btnFournisseurs->setObjectName("btnFournisseurs");
        btnFournisseurs->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: #3b82f6; text-align: left; padding: 12px 16px; border-radius: 8px; font-size: 15px; font-weight: bold; }"));

        verticalLayout_2->addWidget(btnFournisseurs);

        btnCamions = new QPushButton(sidebar);
        btnCamions->setObjectName("btnCamions");
        btnCamions->setStyleSheet(QString::fromUtf8("QPushButton { color: #e5e7eb; background: transparent; text-align: left; padding: 12px 16px; border-radius: 8px; font-size: 15px; } QPushButton:hover { background-color: #2563eb; color: white; }"));

        verticalLayout_2->addWidget(btnCamions);

        btnPoubelles = new QPushButton(sidebar);
        btnPoubelles->setObjectName("btnPoubelles");
        btnPoubelles->setStyleSheet(QString::fromUtf8("QPushButton { color: #e5e7eb; background: transparent; text-align: left; padding: 12px 16px; border-radius: 8px; font-size: 15px; } QPushButton:hover { background-color: #2563eb; color: white; }"));

        verticalLayout_2->addWidget(btnPoubelles);

        btnChauffeurs = new QPushButton(sidebar);
        btnChauffeurs->setObjectName("btnChauffeurs");
        btnChauffeurs->setStyleSheet(QString::fromUtf8("QPushButton { color: #e5e7eb; background: transparent; text-align: left; padding: 12px 16px; border-radius: 8px; font-size: 15px; } QPushButton:hover { background-color: #2563eb; color: white; }"));

        verticalLayout_2->addWidget(btnChauffeurs);

        btnDechets = new QPushButton(sidebar);
        btnDechets->setObjectName("btnDechets");
        btnDechets->setStyleSheet(QString::fromUtf8("QPushButton { color: #e5e7eb; background: transparent; text-align: left; padding: 12px 16px; border-radius: 8px; font-size: 15px; } QPushButton:hover { background-color: #2563eb; color: white; }"));

        verticalLayout_2->addWidget(btnDechets);

        btnPointsRecyclage = new QPushButton(sidebar);
        btnPointsRecyclage->setObjectName("btnPointsRecyclage");
        btnPointsRecyclage->setStyleSheet(QString::fromUtf8("QPushButton { color: #e5e7eb; background: transparent; text-align: left; padding: 12px 16px; border-radius: 8px; font-size: 15px; } QPushButton:hover { background-color: #2563eb; color: white; }"));

        verticalLayout_2->addWidget(btnPointsRecyclage);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btnExit = new QPushButton(sidebar);
        btnExit->setObjectName("btnExit");
        btnExit->setStyleSheet(QString::fromUtf8("QPushButton { color: #e5e7eb; background: transparent; text-align: left; padding: 12px 16px; border-radius: 8px; font-size: 15px; } QPushButton:hover { background-color: #2563eb; color: white; }"));

        verticalLayout_2->addWidget(btnExit);


        horizontalLayout->addWidget(sidebar);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        pageFournisseurs = new QWidget();
        pageFournisseurs->setObjectName("pageFournisseurs");
        pageFournisseurs->setStyleSheet(QString::fromUtf8("background-color: #f8fafc;"));
        verticalLayout_main = new QVBoxLayout(pageFournisseurs);
        verticalLayout_main->setSpacing(20);
        verticalLayout_main->setObjectName("verticalLayout_main");
        verticalLayout_main->setContentsMargins(30, 30, 30, 30);
        headerLayout = new QHBoxLayout();
        headerLayout->setObjectName("headerLayout");
        titleLabel = new QLabel(pageFournisseurs);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setStyleSheet(QString::fromUtf8("color: #000000; font-size: 28px; font-weight: 700;"));

        headerLayout->addWidget(titleLabel);

        horizontalSpacer_title = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        headerLayout->addItem(horizontalSpacer_title);

        userBadge = new QLabel(pageFournisseurs);
        userBadge->setObjectName("userBadge");
        userBadge->setStyleSheet(QString::fromUtf8("background-color: #dbeafe; color: #1e40af; padding: 8px 16px; border-radius: 20px; font-weight: 600; font-size: 13px;"));

        headerLayout->addWidget(userBadge);


        verticalLayout_main->addLayout(headerLayout);

        contentLayout = new QHBoxLayout();
        contentLayout->setSpacing(20);
        contentLayout->setObjectName("contentLayout");
        formFrame = new QFrame(pageFournisseurs);
        formFrame->setObjectName("formFrame");
        formFrame->setMinimumSize(QSize(360, 0));
        formFrame->setMaximumSize(QSize(360, 16777215));
        formFrame->setStyleSheet(QString::fromUtf8("QFrame { background: white; border-radius: 12px; border: 2px solid #e5e7eb; }"));
        formFrame->setFrameShape(QFrame::StyledPanel);
        formFrame->setFrameShadow(QFrame::Raised);
        formVBox = new QVBoxLayout(formFrame);
        formVBox->setSpacing(20);
        formVBox->setObjectName("formVBox");
        formVBox->setContentsMargins(20, 20, 20, 20);
        formTitle = new QLabel(formFrame);
        formTitle->setObjectName("formTitle");
        formTitle->setStyleSheet(QString::fromUtf8("color: #047857; font-size: 20px; font-weight: 700; padding-bottom: 10px; border-bottom: 2px solid #10b981;"));

        formVBox->addWidget(formTitle);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setVerticalSpacing(15);
        formLayout->setHorizontalSpacing(12);
        labelNom = new QLabel(formFrame);
        labelNom->setObjectName("labelNom");
        labelNom->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelNom);

        editNom = new QLineEdit(formFrame);
        editNom->setObjectName("editNom");
        editNom->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; color: #000000; } QLineEdit:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editNom);

        labelContact = new QLabel(formFrame);
        labelContact->setObjectName("labelContact");
        labelContact->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelContact);

        editContact = new QLineEdit(formFrame);
        editContact->setObjectName("editContact");
        editContact->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; color: #000000; } QLineEdit:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(1, QFormLayout::FieldRole, editContact);

        labelEmail = new QLabel(formFrame);
        labelEmail->setObjectName("labelEmail");
        labelEmail->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelEmail);

        editEmail = new QLineEdit(formFrame);
        editEmail->setObjectName("editEmail");
        editEmail->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; color: #000000; } QLineEdit:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(2, QFormLayout::FieldRole, editEmail);

        labelTelephone = new QLabel(formFrame);
        labelTelephone->setObjectName("labelTelephone");
        labelTelephone->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelTelephone);

        editTelephone = new QLineEdit(formFrame);
        editTelephone->setObjectName("editTelephone");
        editTelephone->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; color: #000000; } QLineEdit:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(3, QFormLayout::FieldRole, editTelephone);

        labelAdresse = new QLabel(formFrame);
        labelAdresse->setObjectName("labelAdresse");
        labelAdresse->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelAdresse);

        editAdresse = new QLineEdit(formFrame);
        editAdresse->setObjectName("editAdresse");
        editAdresse->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; color: #000000; } QLineEdit:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(4, QFormLayout::FieldRole, editAdresse);

        labelZone = new QLabel(formFrame);
        labelZone->setObjectName("labelZone");
        labelZone->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(5, QFormLayout::LabelRole, labelZone);

        editZone = new QLineEdit(formFrame);
        editZone->setObjectName("editZone");
        editZone->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; color: #000000; } QLineEdit:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(5, QFormLayout::FieldRole, editZone);


        formVBox->addLayout(formLayout);

        verticalSpacer_form = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formVBox->addItem(verticalSpacer_form);

        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setObjectName("buttonsLayout");
        btnEnregistrer = new QPushButton(formFrame);
        btnEnregistrer->setObjectName("btnEnregistrer");
        btnEnregistrer->setStyleSheet(QString::fromUtf8("QPushButton { background-color: #10b981; color: white; padding: 12px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; } QPushButton:hover { background-color: #059669; }"));

        buttonsLayout->addWidget(btnEnregistrer);

        horizontalSpacer_buttons = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonsLayout->addItem(horizontalSpacer_buttons);

        btnAnnuler = new QPushButton(formFrame);
        btnAnnuler->setObjectName("btnAnnuler");
        btnAnnuler->setStyleSheet(QString::fromUtf8("QPushButton { background-color: #f1f5f9; color: #64748b; padding: 12px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: 1px solid #e5e7eb; } QPushButton:hover { background-color: #e5e7eb; }"));

        buttonsLayout->addWidget(btnAnnuler);


        formVBox->addLayout(buttonsLayout);


        contentLayout->addWidget(formFrame);

        tableFrame = new QFrame(pageFournisseurs);
        tableFrame->setObjectName("tableFrame");
        tableFrame->setStyleSheet(QString::fromUtf8("background: transparent;"));
        tableVBox = new QVBoxLayout(tableFrame);
        tableVBox->setSpacing(15);
        tableVBox->setObjectName("tableVBox");
        tableVBox->setContentsMargins(0, 0, 0, 0);
        toolbarFrame1 = new QFrame(tableFrame);
        toolbarFrame1->setObjectName("toolbarFrame1");
        toolbarFrame1->setStyleSheet(QString::fromUtf8("QFrame { background: white; border-radius: 12px; border: 2px solid #e5e7eb; }"));
        toolbarLayout1 = new QHBoxLayout(toolbarFrame1);
        toolbarLayout1->setSpacing(10);
        toolbarLayout1->setObjectName("toolbarLayout1");
        toolbarLayout1->setContentsMargins(20, 15, 20, 15);
        btnAjouter = new QPushButton(toolbarFrame1);
        btnAjouter->setObjectName("btnAjouter");
        btnAjouter->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #10b981; color: white; } QPushButton:hover { opacity: 0.9; }"));

        toolbarLayout1->addWidget(btnAjouter);

        btnModifier = new QPushButton(toolbarFrame1);
        btnModifier->setObjectName("btnModifier");
        btnModifier->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #3b82f6; color: white; } QPushButton:hover { opacity: 0.9; }"));

        toolbarLayout1->addWidget(btnModifier);

        btnSupprimer = new QPushButton(toolbarFrame1);
        btnSupprimer->setObjectName("btnSupprimer");
        btnSupprimer->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #ef4444; color: white; } QPushButton:hover { opacity: 0.9; }"));

        toolbarLayout1->addWidget(btnSupprimer);

        btnPDF = new QPushButton(toolbarFrame1);
        btnPDF->setObjectName("btnPDF");
        btnPDF->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #8b5cf6; color: white; } QPushButton:hover { opacity: 0.9; }"));

        toolbarLayout1->addWidget(btnPDF);


        tableVBox->addWidget(toolbarFrame1);

        toolbarFrame2 = new QFrame(tableFrame);
        toolbarFrame2->setObjectName("toolbarFrame2");
        toolbarFrame2->setStyleSheet(QString::fromUtf8("QFrame { background: white; border-radius: 12px; border: 2px solid #e5e7eb; }"));
        toolbarLayout2 = new QHBoxLayout(toolbarFrame2);
        toolbarLayout2->setSpacing(10);
        toolbarLayout2->setObjectName("toolbarLayout2");
        toolbarLayout2->setContentsMargins(20, 15, 20, 15);
        btnHistorique = new QPushButton(toolbarFrame2);
        btnHistorique->setObjectName("btnHistorique");
        btnHistorique->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 120px; background-color: #22c55e; color: white; }"));

        toolbarLayout2->addWidget(btnHistorique);

        btnReclamations = new QPushButton(toolbarFrame2);
        btnReclamations->setObjectName("btnReclamations");
        btnReclamations->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 130px; background-color: #f59e0b; color: white; }"));

        toolbarLayout2->addWidget(btnReclamations);

        btnMail = new QPushButton(toolbarFrame2);
        btnMail->setObjectName("btnMail");
        btnMail->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #0ea5e9; color: white; }"));

        toolbarLayout2->addWidget(btnMail);

        horizontalSpacer_search = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        toolbarLayout2->addItem(horizontalSpacer_search);

        searchFournisseurs = new QLineEdit(toolbarFrame2);
        searchFournisseurs->setObjectName("searchFournisseurs");
        searchFournisseurs->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 12px 15px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; color: #000000; background: white; min-width: 300px; } QLineEdit:focus { border: 2px solid #10b981; }"));
        searchFournisseurs->setMinimumSize(QSize(0, 40));

        toolbarLayout2->addWidget(searchFournisseurs);


        tableVBox->addWidget(toolbarFrame2);

        tableFournisseurs = new QTableWidget(tableFrame);
        if (tableFournisseurs->columnCount() < 6)
            tableFournisseurs->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableFournisseurs->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableFournisseurs->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableFournisseurs->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableFournisseurs->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableFournisseurs->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableFournisseurs->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableFournisseurs->setObjectName("tableFournisseurs");
        tableFournisseurs->setStyleSheet(QString::fromUtf8("QTableWidget { border: none; gridline-color: #e5e7eb; selection-background-color: #dcfce7; selection-color: #000000; font-size: 14px; }\n"
"QHeaderView::section { background-color: #f0fdf4; color: #000000; font-weight: 700; padding: 12px 10px; border-bottom: 2px solid #10b981; border-right: 1px solid #e5e7eb; font-size: 13px; }\n"
"QTableWidget::item { padding: 10px; border-bottom: 1px solid #f8fafc; color: #000000; }\n"
"QTableWidget::item:selected { background-color: #dcfce7; color: #000000; font-weight: 600; }"));
        tableFournisseurs->setAlternatingRowColors(true);
        tableFournisseurs->setSelectionMode(QAbstractItemView::SingleSelection);
        tableFournisseurs->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableFournisseurs->setSortingEnabled(true);
        tableFournisseurs->setColumnCount(6);
        tableFournisseurs->horizontalHeader()->setStretchLastSection(true);

        tableVBox->addWidget(tableFournisseurs);

        statsFrame = new QFrame(tableFrame);
        statsFrame->setObjectName("statsFrame");
        statsFrame->setStyleSheet(QString::fromUtf8("QFrame { background: #f0fdf4; border-radius: 8px; border: 1px solid #bbf7d0; }"));
        hboxLayout = new QHBoxLayout(statsFrame);
        hboxLayout->setObjectName("hboxLayout");
        statsLabel = new QLabel(statsFrame);
        statsLabel->setObjectName("statsLabel");

        hboxLayout->addWidget(statsLabel);


        tableVBox->addWidget(statsFrame);


        contentLayout->addWidget(tableFrame);


        verticalLayout_main->addLayout(contentLayout);

        stackedWidget->addWidget(pageFournisseurs);

        horizontalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "EcoSmart Collect - Gestion Intelligente des D\303\251chets", nullptr));
        logoLabel->setText(QCoreApplication::translate("MainWindow", "\342\231\273 EcoSmart", nullptr));
        subtitleLabel->setText(QCoreApplication::translate("MainWindow", "Gestion des D\303\251chets", nullptr));
        btnFournisseurs->setText(QCoreApplication::translate("MainWindow", "\360\237\217\242 Fournisseurs", nullptr));
        btnCamions->setText(QCoreApplication::translate("MainWindow", "\360\237\232\232 Camions", nullptr));
        btnPoubelles->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221 Poubelles", nullptr));
        btnChauffeurs->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244 Chauffeurs", nullptr));
        btnDechets->setText(QCoreApplication::translate("MainWindow", "\342\231\273 D\303\251chets", nullptr));
        btnPointsRecyclage->setText(QCoreApplication::translate("MainWindow", "\360\237\223\215 Points Recyclage", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "\342\217\273 Quitter", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "\360\237\217\242 Gestion des Fournisseurs", nullptr));
        userBadge->setText(QCoreApplication::translate("MainWindow", "Administrateur du service de collecte", nullptr));
        formTitle->setText(QCoreApplication::translate("MainWindow", "Formulaire Fournisseur", nullptr));
        labelNom->setText(QCoreApplication::translate("MainWindow", "Nom :", nullptr));
        editNom->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: Soci\303\251t\303\251 Verte", nullptr));
        labelContact->setText(QCoreApplication::translate("MainWindow", "Contact :", nullptr));
        editContact->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: Mohamed Ali", nullptr));
        labelEmail->setText(QCoreApplication::translate("MainWindow", "Email :", nullptr));
        editEmail->setPlaceholderText(QCoreApplication::translate("MainWindow", "contact@societeverte.tn", nullptr));
        labelTelephone->setText(QCoreApplication::translate("MainWindow", "T\303\251l\303\251phone :", nullptr));
        editTelephone->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: +216 98 123 456", nullptr));
        labelAdresse->setText(QCoreApplication::translate("MainWindow", "Adresse :", nullptr));
        editAdresse->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: 12 Rue de l'Environnement, Tunis", nullptr));
        labelZone->setText(QCoreApplication::translate("MainWindow", "Zone :", nullptr));
        editZone->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: Grand Tunis", nullptr));
        btnEnregistrer->setText(QCoreApplication::translate("MainWindow", "\360\237\222\276 Enregistrer", nullptr));
        btnAnnuler->setText(QCoreApplication::translate("MainWindow", "\342\206\272 Annuler", nullptr));
        btnAjouter->setText(QCoreApplication::translate("MainWindow", "\342\236\225 Ajouter", nullptr));
        btnModifier->setText(QCoreApplication::translate("MainWindow", "\342\234\217 Modifier", nullptr));
        btnSupprimer->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221 Supprimer", nullptr));
        btnPDF->setText(QCoreApplication::translate("MainWindow", "\360\237\223\204 PDF", nullptr));
        btnHistorique->setText(QCoreApplication::translate("MainWindow", "\360\237\223\212 Historique", nullptr));
        btnReclamations->setText(QCoreApplication::translate("MainWindow", "\360\237\223\235 R\303\251clamations", nullptr));
        btnMail->setText(QCoreApplication::translate("MainWindow", "\342\234\211 Mail", nullptr));
        searchFournisseurs->setPlaceholderText(QCoreApplication::translate("MainWindow", " Rechercher un fournisseur...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableFournisseurs->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableFournisseurs->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableFournisseurs->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Contact", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableFournisseurs->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableFournisseurs->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "T\303\251l\303\251phone", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableFournisseurs->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Zone", nullptr));
        statsLabel->setText(QCoreApplication::translate("MainWindow", "5 fournisseurs enregistr\303\251s \342\200\242 3 actifs cette semaine", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
