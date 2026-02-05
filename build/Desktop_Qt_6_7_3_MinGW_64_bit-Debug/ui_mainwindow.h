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
#include <QtWidgets/QGridLayout>
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
    QPushButton *btnFournisseurs;
    QPushButton *btnCamions;
    QPushButton *btnPoubelles;
    QPushButton *btnChauffeurs;
    QPushButton *btnDechets;
    QPushButton *btnPointsRecyclage;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnExit;
    QStackedWidget *stackedWidget;
    QWidget *pageChauffeurs;
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
    QLabel *labelPrenom;
    QLineEdit *editPrenom;
    QLabel *labelPermis;
    QLineEdit *editPermis;
    QLabel *labelTelephone;
    QLineEdit *editTelephone;
    QLabel *labelDisponibilite;
    QComboBox *comboDisponibilite;
    QSpacerItem *verticalSpacer_form;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *buttonsLayout;
    QPushButton *btnEnregistrer;
    QSpacerItem *horizontalSpacer_buttons;
    QPushButton *btnAnnuler;
    QFrame *tableFrame;
    QVBoxLayout *tableVBox;
    QHBoxLayout *part1_layout;
    QPushButton *btnModifier;
    QPushButton *btnSupprimer;
    QPushButton *btnPDF;
    QHBoxLayout *part2_layout;
    QPushButton *btnperformance;
    QPushButton *btnDanger;
    QPushButton *btnTri;
    QSpacerItem *spacer_flex;
    QLineEdit *searchChauffeurs;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QTableWidget *tableChauffeurs;
    QLabel *subtitleLabel;
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
        sidebar->setFrameShape(QFrame::Shape::StyledPanel);
        sidebar->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(sidebar);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(20, 25, 20, 25);
        logoLabel = new QLabel(sidebar);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setStyleSheet(QString::fromUtf8("color: #ffffff; font-size: 24px; font-weight: 700; padding-bottom: 5px;"));

        verticalLayout_2->addWidget(logoLabel);

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
        btnChauffeurs->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: #3b82f6; text-align: left; padding: 12px 16px; border-radius: 8px; font-size: 15px; font-weight: bold; }"));

        verticalLayout_2->addWidget(btnChauffeurs);

        btnDechets = new QPushButton(sidebar);
        btnDechets->setObjectName("btnDechets");
        btnDechets->setStyleSheet(QString::fromUtf8("QPushButton { color: #e5e7eb; background: transparent; text-align: left; padding: 12px 16px; border-radius: 8px; font-size: 15px; } QPushButton:hover { background-color: #2563eb; color: white; }"));

        verticalLayout_2->addWidget(btnDechets);

        btnPointsRecyclage = new QPushButton(sidebar);
        btnPointsRecyclage->setObjectName("btnPointsRecyclage");
        btnPointsRecyclage->setStyleSheet(QString::fromUtf8("QPushButton { color: #e5e7eb; background: transparent; text-align: left; padding: 12px 16px; border-radius: 8px; font-size: 15px; } QPushButton:hover { background-color: #2563eb; color: white; }"));

        verticalLayout_2->addWidget(btnPointsRecyclage);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        btnExit = new QPushButton(sidebar);
        btnExit->setObjectName("btnExit");
        btnExit->setStyleSheet(QString::fromUtf8("QPushButton { color: #e5e7eb; background: transparent; text-align: left; padding: 12px 16px; border-radius: 8px; font-size: 15px; } QPushButton:hover { background-color: #2563eb; color: white; }"));

        verticalLayout_2->addWidget(btnExit);


        horizontalLayout->addWidget(sidebar);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        pageChauffeurs = new QWidget();
        pageChauffeurs->setObjectName("pageChauffeurs");
        pageChauffeurs->setStyleSheet(QString::fromUtf8("background-color: #f8fafc;"));
        verticalLayout_main = new QVBoxLayout(pageChauffeurs);
        verticalLayout_main->setSpacing(20);
        verticalLayout_main->setObjectName("verticalLayout_main");
        verticalLayout_main->setContentsMargins(30, 30, 30, 30);
        headerLayout = new QHBoxLayout();
        headerLayout->setObjectName("headerLayout");
        titleLabel = new QLabel(pageChauffeurs);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setStyleSheet(QString::fromUtf8("color: #000000; font-size: 28px; font-weight: 700;"));

        headerLayout->addWidget(titleLabel);

        horizontalSpacer_title = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        headerLayout->addItem(horizontalSpacer_title);

        userBadge = new QLabel(pageChauffeurs);
        userBadge->setObjectName("userBadge");
        userBadge->setStyleSheet(QString::fromUtf8("background-color: #dbeafe; color: #1e40af; padding: 8px 16px; border-radius: 20px; font-weight: 600; font-size: 13px;"));

        headerLayout->addWidget(userBadge);


        verticalLayout_main->addLayout(headerLayout);

        contentLayout = new QHBoxLayout();
        contentLayout->setSpacing(20);
        contentLayout->setObjectName("contentLayout");
        formFrame = new QFrame(pageChauffeurs);
        formFrame->setObjectName("formFrame");
        formFrame->setMinimumSize(QSize(360, 0));
        formFrame->setMaximumSize(QSize(360, 16777215));
        formFrame->setStyleSheet(QString::fromUtf8("QFrame { background: white; border-radius: 12px; border: 2px solid #e5e7eb; }"));
        formFrame->setFrameShape(QFrame::Shape::StyledPanel);
        formFrame->setFrameShadow(QFrame::Shadow::Raised);
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
        formLayout->setHorizontalSpacing(12);
        formLayout->setVerticalSpacing(15);
        labelNom = new QLabel(formFrame);
        labelNom->setObjectName("labelNom");
        labelNom->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelNom);

        editNom = new QLineEdit(formFrame);
        editNom->setObjectName("editNom");
        editNom->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; color: #000000; } QLineEdit:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editNom);

        labelPrenom = new QLabel(formFrame);
        labelPrenom->setObjectName("labelPrenom");
        labelPrenom->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPrenom);

        editPrenom = new QLineEdit(formFrame);
        editPrenom->setObjectName("editPrenom");
        editPrenom->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; color: #000000; } QLineEdit:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(1, QFormLayout::FieldRole, editPrenom);

        labelPermis = new QLabel(formFrame);
        labelPermis->setObjectName("labelPermis");
        labelPermis->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelPermis);

        editPermis = new QLineEdit(formFrame);
        editPermis->setObjectName("editPermis");
        editPermis->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; color: #000000; } QLineEdit:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(2, QFormLayout::FieldRole, editPermis);

        labelTelephone = new QLabel(formFrame);
        labelTelephone->setObjectName("labelTelephone");
        labelTelephone->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelTelephone);

        editTelephone = new QLineEdit(formFrame);
        editTelephone->setObjectName("editTelephone");
        editTelephone->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; color: #000000; } QLineEdit:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(3, QFormLayout::FieldRole, editTelephone);

        labelDisponibilite = new QLabel(formFrame);
        labelDisponibilite->setObjectName("labelDisponibilite");
        labelDisponibilite->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelDisponibilite);

        comboDisponibilite = new QComboBox(formFrame);
        comboDisponibilite->addItem(QString());
        comboDisponibilite->addItem(QString());
        comboDisponibilite->addItem(QString());
        comboDisponibilite->addItem(QString());
        comboDisponibilite->setObjectName("comboDisponibilite");
        comboDisponibilite->setStyleSheet(QString::fromUtf8("QComboBox { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; background: white; font-size: 14px; color: #000000; } QComboBox:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboDisponibilite);


        formVBox->addLayout(formLayout);

        verticalSpacer_form = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formVBox->addItem(verticalSpacer_form);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formVBox->addItem(verticalSpacer);

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

        tableFrame = new QFrame(pageChauffeurs);
        tableFrame->setObjectName("tableFrame");
        tableFrame->setStyleSheet(QString::fromUtf8("background: transparent;"));
        tableVBox = new QVBoxLayout(tableFrame);
        tableVBox->setSpacing(15);
        tableVBox->setObjectName("tableVBox");
        tableVBox->setContentsMargins(0, 0, 0, 0);
        part1_layout = new QHBoxLayout();
        part1_layout->setObjectName("part1_layout");
        btnModifier = new QPushButton(tableFrame);
        btnModifier->setObjectName("btnModifier");
        btnModifier->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #3b82f6; color: white; } QPushButton:hover { opacity: 0.9; }"));

        part1_layout->addWidget(btnModifier);

        btnSupprimer = new QPushButton(tableFrame);
        btnSupprimer->setObjectName("btnSupprimer");
        btnSupprimer->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #ef4444; color: white; } QPushButton:hover { opacity: 0.9; }"));

        part1_layout->addWidget(btnSupprimer);

        btnPDF = new QPushButton(tableFrame);
        btnPDF->setObjectName("btnPDF");
        btnPDF->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #8b5cf6; color: white; } QPushButton:hover { opacity: 0.9; }"));

        part1_layout->addWidget(btnPDF);


        tableVBox->addLayout(part1_layout);

        part2_layout = new QHBoxLayout();
        part2_layout->setObjectName("part2_layout");
        btnperformance = new QPushButton(tableFrame);
        btnperformance->setObjectName("btnperformance");
        btnperformance->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #77FF33; color: white; } QPushButton:hover { opacity: 0.9; }"));

        part2_layout->addWidget(btnperformance);

        btnDanger = new QPushButton(tableFrame);
        btnDanger->setObjectName("btnDanger");
        btnDanger->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #F28C28; color: white; } QPushButton:hover { opacity: 0.9; }"));

        part2_layout->addWidget(btnDanger);

        btnTri = new QPushButton(tableFrame);
        btnTri->setObjectName("btnTri");
        btnTri->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #10b981; color: white; } QPushButton:hover { opacity: 0.9; }"));

        part2_layout->addWidget(btnTri);


        tableVBox->addLayout(part2_layout);

        spacer_flex = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        tableVBox->addItem(spacer_flex);

        searchChauffeurs = new QLineEdit(tableFrame);
        searchChauffeurs->setObjectName("searchChauffeurs");
        searchChauffeurs->setMinimumSize(QSize(334, 40));
        searchChauffeurs->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 12px 15px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; color: #000000; background: white; } QLineEdit:focus { border: 2px solid #10b981; }"));

        tableVBox->addWidget(searchChauffeurs);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");

        verticalLayout->addLayout(gridLayout);

        tableChauffeurs = new QTableWidget(tableFrame);
        if (tableChauffeurs->columnCount() < 7)
            tableChauffeurs->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableChauffeurs->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableChauffeurs->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableChauffeurs->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableChauffeurs->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableChauffeurs->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableChauffeurs->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableChauffeurs->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableChauffeurs->rowCount() < 3)
            tableChauffeurs->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableChauffeurs->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableChauffeurs->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableChauffeurs->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableChauffeurs->setItem(0, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableChauffeurs->setItem(0, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableChauffeurs->setItem(0, 2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableChauffeurs->setItem(0, 3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableChauffeurs->setItem(0, 4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableChauffeurs->setItem(0, 5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableChauffeurs->setItem(1, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableChauffeurs->setItem(1, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableChauffeurs->setItem(1, 2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableChauffeurs->setItem(1, 3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableChauffeurs->setItem(1, 4, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableChauffeurs->setItem(1, 5, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableChauffeurs->setItem(2, 0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableChauffeurs->setItem(2, 1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableChauffeurs->setItem(2, 2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableChauffeurs->setItem(2, 3, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableChauffeurs->setItem(2, 4, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableChauffeurs->setItem(2, 5, __qtablewidgetitem27);
        tableChauffeurs->setObjectName("tableChauffeurs");
        tableChauffeurs->setStyleSheet(QString::fromUtf8("QTableWidget { border: none; gridline-color: #e5e7eb; selection-background-color: #dcfce7; selection-color: #000000; font-size: 14px; } QHeaderView::section { background-color: #f0fdf4; color: #000000; font-weight: 700; padding: 12px 10px; border-bottom: 2px solid #10b981; border-right: 1px solid #e5e7eb; font-size: 13px; } QTableWidget::item { padding: 10px; border-bottom: 1px solid #f8fafc; color: #000000; } QTableWidget::item:selected { background-color: #dcfce7; color: #000000; font-weight: 600; }"));
        tableChauffeurs->setAlternatingRowColors(true);
        tableChauffeurs->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableChauffeurs->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableChauffeurs->setSortingEnabled(true);
        tableChauffeurs->setColumnCount(7);
        tableChauffeurs->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableChauffeurs);


        tableVBox->addLayout(verticalLayout);

        subtitleLabel = new QLabel(tableFrame);
        subtitleLabel->setObjectName("subtitleLabel");
        subtitleLabel->setStyleSheet(QString::fromUtf8("color: #dbeafe; font-size: 14px; padding-bottom: 20px;"));

        tableVBox->addWidget(subtitleLabel);

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

        stackedWidget->addWidget(pageChauffeurs);

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
        btnFournisseurs->setText(QCoreApplication::translate("MainWindow", "\360\237\217\242 Fournisseurs", nullptr));
        btnCamions->setText(QCoreApplication::translate("MainWindow", "\360\237\232\232 Camions", nullptr));
        btnPoubelles->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221 Poubelles", nullptr));
        btnChauffeurs->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244 Chauffeurs", nullptr));
        btnDechets->setText(QCoreApplication::translate("MainWindow", "\342\231\273 D\303\251chets", nullptr));
        btnPointsRecyclage->setText(QCoreApplication::translate("MainWindow", "\360\237\223\215 Points Recyclage", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "\342\217\273 Quitter", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "\360\237\221\250\342\200\215\342\234\210\357\270\217 Gestion des Chauffeurs", nullptr));
        userBadge->setText(QCoreApplication::translate("MainWindow", "Responsable des ressources humaines", nullptr));
        formTitle->setText(QCoreApplication::translate("MainWindow", "Formulaire Chauffeur", nullptr));
        labelNom->setText(QCoreApplication::translate("MainWindow", "Nom :", nullptr));
        editNom->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: Ben Ali", nullptr));
        labelPrenom->setText(QCoreApplication::translate("MainWindow", "Pr\303\251nom :", nullptr));
        editPrenom->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: Mohamed", nullptr));
        labelPermis->setText(QCoreApplication::translate("MainWindow", "Permis :", nullptr));
        editPermis->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: B 12345678", nullptr));
        labelTelephone->setText(QCoreApplication::translate("MainWindow", "T\303\251l\303\251phone :", nullptr));
        editTelephone->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: +216 98 123 456", nullptr));
        labelDisponibilite->setText(QCoreApplication::translate("MainWindow", "Disponibilit\303\251 :", nullptr));
        comboDisponibilite->setItemText(0, QCoreApplication::translate("MainWindow", "Disponible", nullptr));
        comboDisponibilite->setItemText(1, QCoreApplication::translate("MainWindow", "En mission", nullptr));
        comboDisponibilite->setItemText(2, QCoreApplication::translate("MainWindow", "En cong\303\251", nullptr));
        comboDisponibilite->setItemText(3, QCoreApplication::translate("MainWindow", "Absent", nullptr));

        btnEnregistrer->setText(QCoreApplication::translate("MainWindow", "\360\237\222\276 Enregistrer", nullptr));
        btnAnnuler->setText(QCoreApplication::translate("MainWindow", "\342\206\272 Annuler", nullptr));
        btnModifier->setText(QCoreApplication::translate("MainWindow", "\342\234\217 Modifier", nullptr));
        btnSupprimer->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221 Supprimer", nullptr));
        btnPDF->setText(QCoreApplication::translate("MainWindow", "\360\237\223\204 exporter PDF", nullptr));
        btnperformance->setText(QCoreApplication::translate("MainWindow", " \360\237\223\210 Perofrmance", nullptr));
        btnDanger->setText(QCoreApplication::translate("MainWindow", " \342\232\240\357\270\217 Danger", nullptr));
        btnTri->setText(QCoreApplication::translate("MainWindow", " \360\237\223\213 Tri", nullptr));
        searchChauffeurs->setPlaceholderText(QCoreApplication::translate("MainWindow", " Rechercher un chauffeur...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableChauffeurs->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableChauffeurs->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableChauffeurs->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Pr\303\251nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableChauffeurs->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Permis", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableChauffeurs->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "T\303\251l\303\251phone", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableChauffeurs->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Disponibilit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableChauffeurs->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "  Actions", nullptr));

        const bool __sortingEnabled = tableChauffeurs->isSortingEnabled();
        tableChauffeurs->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem7 = tableChauffeurs->item(0, 0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableChauffeurs->item(0, 1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Zoghlami", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableChauffeurs->item(0, 2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Sami", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableChauffeurs->item(0, 3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "B-12345", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableChauffeurs->item(0, 4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "23 145 456", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableChauffeurs->item(0, 5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "disponible", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableChauffeurs->item(1, 0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableChauffeurs->item(1, 1);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "Gharbi", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableChauffeurs->item(1, 2);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "Yassine", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableChauffeurs->item(1, 3);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "B-67890", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableChauffeurs->item(1, 4);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "94 742 016", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableChauffeurs->item(1, 5);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "en mission", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableChauffeurs->item(2, 0);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableChauffeurs->item(2, 1);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "younes", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableChauffeurs->item(2, 2);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "amine", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableChauffeurs->item(2, 3);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "h-1250", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableChauffeurs->item(2, 4);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "54 148 624", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableChauffeurs->item(2, 5);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "en repos", nullptr));
        tableChauffeurs->setSortingEnabled(__sortingEnabled);

        subtitleLabel->setText(QCoreApplication::translate("MainWindow", "Gestion des D\303\251chets", nullptr));
        statsLabel->setText(QCoreApplication::translate("MainWindow", "12 chauffeurs enregistr\303\251s \342\200\242 8 disponibles cette semaine", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
