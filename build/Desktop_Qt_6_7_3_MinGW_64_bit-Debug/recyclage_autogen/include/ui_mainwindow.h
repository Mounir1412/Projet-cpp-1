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
#include <QtWidgets/QComboBox>
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
    QWidget *pagePointsRecyclage;
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
    QLabel *labelLocalisation;
    QLineEdit *editLocalisation;
    QLabel *labelCapacite;
    QLineEdit *editCapacite;
    QLabel *labelNiveau;
    QLineEdit *editNiveau;
    QLabel *labelEtat;
    QComboBox *comboEtat;
    QSpacerItem *verticalSpacer_form;
    QHBoxLayout *buttonsLayout;
    QPushButton *btnEnregistrer;
    QSpacerItem *horizontalSpacer_buttons;
    QPushButton *btnAnnuler;
    QFrame *tableFrame;
    QVBoxLayout *tableVBox;
    QFrame *toolbarFrame;
    QHBoxLayout *toolbarLayout;
    QPushButton *btnAjouter;
    QPushButton *btnModifier;
    QPushButton *btnSupprimer;
    QPushButton *btnPDF;
    QSpacerItem *horizontalSpacer_search;
    QLineEdit *searchPoints;
    QTableWidget *tablePointsRecyclage;
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
        btnFournisseurs->setStyleSheet(QString::fromUtf8("QPushButton { color: #e5e7eb; background: transparent; text-align: left; padding: 12px 16px; border-radius: 8px; font-size: 15px; } QPushButton:hover { background-color: #2563eb; color: white; }"));

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
        btnPointsRecyclage->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: #3b82f6; text-align: left; padding: 12px 16px; border-radius: 8px; font-size: 15px; font-weight: bold; }"));

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
        pagePointsRecyclage = new QWidget();
        pagePointsRecyclage->setObjectName("pagePointsRecyclage");
        pagePointsRecyclage->setStyleSheet(QString::fromUtf8("background-color: #f8fafc;"));
        verticalLayout_main = new QVBoxLayout(pagePointsRecyclage);
        verticalLayout_main->setSpacing(20);
        verticalLayout_main->setObjectName("verticalLayout_main");
        verticalLayout_main->setContentsMargins(30, 30, 30, 30);
        headerLayout = new QHBoxLayout();
        headerLayout->setObjectName("headerLayout");
        titleLabel = new QLabel(pagePointsRecyclage);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setStyleSheet(QString::fromUtf8("color: #000000; font-size: 28px; font-weight: 700;"));

        headerLayout->addWidget(titleLabel);

        horizontalSpacer_title = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        headerLayout->addItem(horizontalSpacer_title);

        userBadge = new QLabel(pagePointsRecyclage);
        userBadge->setObjectName("userBadge");
        userBadge->setStyleSheet(QString::fromUtf8("background-color: #dbeafe; color: #1e40af; padding: 8px 16px; border-radius: 20px; font-weight: 600; font-size: 13px;"));

        headerLayout->addWidget(userBadge);


        verticalLayout_main->addLayout(headerLayout);

        contentLayout = new QHBoxLayout();
        contentLayout->setSpacing(20);
        contentLayout->setObjectName("contentLayout");
        formFrame = new QFrame(pagePointsRecyclage);
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
        labelLocalisation = new QLabel(formFrame);
        labelLocalisation->setObjectName("labelLocalisation");
        labelLocalisation->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelLocalisation);

        editLocalisation = new QLineEdit(formFrame);
        editLocalisation->setObjectName("editLocalisation");
        editLocalisation->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; color: #000000; } QLineEdit:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editLocalisation);

        labelCapacite = new QLabel(formFrame);
        labelCapacite->setObjectName("labelCapacite");
        labelCapacite->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelCapacite);

        editCapacite = new QLineEdit(formFrame);
        editCapacite->setObjectName("editCapacite");
        editCapacite->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; color: #000000; } QLineEdit:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(1, QFormLayout::FieldRole, editCapacite);

        labelNiveau = new QLabel(formFrame);
        labelNiveau->setObjectName("labelNiveau");
        labelNiveau->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelNiveau);

        editNiveau = new QLineEdit(formFrame);
        editNiveau->setObjectName("editNiveau");
        editNiveau->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; color: #000000; } QLineEdit:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(2, QFormLayout::FieldRole, editNiveau);

        labelEtat = new QLabel(formFrame);
        labelEtat->setObjectName("labelEtat");
        labelEtat->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelEtat);

        comboEtat = new QComboBox(formFrame);
        comboEtat->addItem(QString());
        comboEtat->addItem(QString());
        comboEtat->addItem(QString());
        comboEtat->addItem(QString());
        comboEtat->setObjectName("comboEtat");
        comboEtat->setStyleSheet(QString::fromUtf8("QComboBox { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; background: white; font-size: 14px; color: #000000; } QComboBox:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboEtat);


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

        tableFrame = new QFrame(pagePointsRecyclage);
        tableFrame->setObjectName("tableFrame");
        tableFrame->setStyleSheet(QString::fromUtf8("background: transparent;"));
        tableVBox = new QVBoxLayout(tableFrame);
        tableVBox->setSpacing(15);
        tableVBox->setObjectName("tableVBox");
        tableVBox->setContentsMargins(0, 0, 0, 0);
        toolbarFrame = new QFrame(tableFrame);
        toolbarFrame->setObjectName("toolbarFrame");
        toolbarFrame->setStyleSheet(QString::fromUtf8("QFrame { background: white; border-radius: 12px; border: 2px solid #e5e7eb; }"));
        toolbarLayout = new QHBoxLayout(toolbarFrame);
        toolbarLayout->setSpacing(10);
        toolbarLayout->setObjectName("toolbarLayout");
        toolbarLayout->setContentsMargins(20, 15, 20, 15);
        btnAjouter = new QPushButton(toolbarFrame);
        btnAjouter->setObjectName("btnAjouter");
        btnAjouter->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #10b981; color: white; } QPushButton:hover { opacity: 0.9; }"));

        toolbarLayout->addWidget(btnAjouter);

        btnModifier = new QPushButton(toolbarFrame);
        btnModifier->setObjectName("btnModifier");
        btnModifier->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #3b82f6; color: white; } QPushButton:hover { opacity: 0.9; }"));

        toolbarLayout->addWidget(btnModifier);

        btnSupprimer = new QPushButton(toolbarFrame);
        btnSupprimer->setObjectName("btnSupprimer");
        btnSupprimer->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #ef4444; color: white; } QPushButton:hover { opacity: 0.9; }"));

        toolbarLayout->addWidget(btnSupprimer);

        btnPDF = new QPushButton(toolbarFrame);
        btnPDF->setObjectName("btnPDF");
        btnPDF->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #8b5cf6; color: white; } QPushButton:hover { opacity: 0.9; }"));

        toolbarLayout->addWidget(btnPDF);

        horizontalSpacer_search = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        toolbarLayout->addItem(horizontalSpacer_search);

        searchPoints = new QLineEdit(toolbarFrame);
        searchPoints->setObjectName("searchPoints");
        searchPoints->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 12px 15px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; color: #000000; background: white; min-width: 300px; } QLineEdit:focus { border: 2px solid #10b981; }"));
        searchPoints->setMinimumSize(QSize(0, 40));

        toolbarLayout->addWidget(searchPoints);


        tableVBox->addWidget(toolbarFrame);

        tablePointsRecyclage = new QTableWidget(tableFrame);
        if (tablePointsRecyclage->columnCount() < 5)
            tablePointsRecyclage->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablePointsRecyclage->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablePointsRecyclage->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablePointsRecyclage->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablePointsRecyclage->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablePointsRecyclage->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tablePointsRecyclage->setObjectName("tablePointsRecyclage");
        tablePointsRecyclage->setStyleSheet(QString::fromUtf8("QTableWidget { border: none; gridline-color: #e5e7eb; selection-background-color: #dcfce7; selection-color: #000000; font-size: 14px; } QHeaderView::section { background-color: #f0fdf4; color: #000000; font-weight: 700; padding: 12px 10px; border-bottom: 2px solid #10b981; border-right: 1px solid #e5e7eb; font-size: 13px; } QTableWidget::item { padding: 10px; border-bottom: 1px solid #f8fafc; color: #000000; } QTableWidget::item:selected { background-color: #dcfce7; color: #000000; font-weight: 600; }"));
        tablePointsRecyclage->setAlternatingRowColors(true);
        tablePointsRecyclage->setSelectionMode(QAbstractItemView::SingleSelection);
        tablePointsRecyclage->setSelectionBehavior(QAbstractItemView::SelectRows);
        tablePointsRecyclage->setSortingEnabled(true);
        tablePointsRecyclage->setColumnCount(5);
        tablePointsRecyclage->horizontalHeader()->setStretchLastSection(true);

        tableVBox->addWidget(tablePointsRecyclage);

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

        stackedWidget->addWidget(pagePointsRecyclage);

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
        titleLabel->setText(QCoreApplication::translate("MainWindow", "\360\237\223\215 Gestion des Points de Recyclage", nullptr));
        userBadge->setText(QCoreApplication::translate("MainWindow", "Responsable Recyclage", nullptr));
        formTitle->setText(QCoreApplication::translate("MainWindow", "Formulaire Point de Recyclage", nullptr));
        labelLocalisation->setText(QCoreApplication::translate("MainWindow", "Localisation :", nullptr));
        editLocalisation->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: Cit\303\251 Ennasr 2, Tunis", nullptr));
        labelCapacite->setText(QCoreApplication::translate("MainWindow", "Capacit\303\251 :", nullptr));
        editCapacite->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: 1200 L", nullptr));
        labelNiveau->setText(QCoreApplication::translate("MainWindow", "Niv. remplissage :", nullptr));
        editNiveau->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: 75 %", nullptr));
        labelEtat->setText(QCoreApplication::translate("MainWindow", "\303\211tat :", nullptr));
        comboEtat->setItemText(0, QCoreApplication::translate("MainWindow", "Bon", nullptr));
        comboEtat->setItemText(1, QCoreApplication::translate("MainWindow", "Endommag\303\251", nullptr));
        comboEtat->setItemText(2, QCoreApplication::translate("MainWindow", "En maintenance", nullptr));
        comboEtat->setItemText(3, QCoreApplication::translate("MainWindow", "Plein", nullptr));

        btnEnregistrer->setText(QCoreApplication::translate("MainWindow", "\360\237\222\276 Enregistrer", nullptr));
        btnAnnuler->setText(QCoreApplication::translate("MainWindow", "\342\206\272 Annuler", nullptr));
        btnAjouter->setText(QCoreApplication::translate("MainWindow", "\342\236\225 Ajouter", nullptr));
        btnModifier->setText(QCoreApplication::translate("MainWindow", "\342\234\217 Modifier", nullptr));
        btnSupprimer->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221 Supprimer", nullptr));
        btnPDF->setText(QCoreApplication::translate("MainWindow", "\360\237\223\204 PDF", nullptr));
        searchPoints->setPlaceholderText(QCoreApplication::translate("MainWindow", " Rechercher un point de recyclage...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablePointsRecyclage->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablePointsRecyclage->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Localisation", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablePointsRecyclage->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Capacit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablePointsRecyclage->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Niv. remplissage", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablePointsRecyclage->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\303\211tat", nullptr));
        statsLabel->setText(QCoreApplication::translate("MainWindow", "28 points de recyclage \342\200\242 9 \303\240 ramasser cette semaine", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
