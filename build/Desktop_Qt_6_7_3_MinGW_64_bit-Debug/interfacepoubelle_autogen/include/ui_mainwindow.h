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
    QWidget *pagePoubelles;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer;
    QLabel *userBadge;
    QHBoxLayout *horizontalLayout_5;
    QFrame *formFrame;
    QVBoxLayout *verticalLayout_11;
    QLabel *formTitle;
    QFormLayout *formLayout;
    QLabel *labelZone;
    QLineEdit *editZone;
    QLabel *labelCapacite;
    QLineEdit *editCapacite;
    QLabel *labelTypeDechet;
    QComboBox *comboTypeDechet;
    QLabel *labelEtat;
    QComboBox *comboEtat;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnEnregistrer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnAnnuler;
    QFrame *tableFrame;
    QVBoxLayout *verticalLayout_12;
    QFrame *toolbarFrame;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnAjouter;
    QPushButton *btnModifier;
    QPushButton *btnSupprimer;
    QPushButton *btnPDF;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *searchPoubelles;
    QTableWidget *tablePoubelles;
    QFrame *statsFrame;
    QHBoxLayout *horizontalLayout_stats;
    QLabel *statsLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1341, 700);
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
        verticalLayout_2->setSpacing(25);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(20, 30, 20, 30);
        logoLabel = new QLabel(sidebar);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setStyleSheet(QString::fromUtf8("color: #ffffff; font-size: 24px; font-weight: 700; padding-bottom: 5px;"));

        verticalLayout_2->addWidget(logoLabel);

        subtitleLabel = new QLabel(sidebar);
        subtitleLabel->setObjectName("subtitleLabel");
        subtitleLabel->setStyleSheet(QString::fromUtf8("color: #dbeafe; font-size: 14px; padding-bottom: 20px;"));

        verticalLayout_2->addWidget(subtitleLabel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

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
        btnPoubelles->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: #3b82f6; text-align: left; padding: 12px 16px; border-radius: 8px; font-size: 15px; font-weight: bold; }"));

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
        pagePoubelles = new QWidget();
        pagePoubelles->setObjectName("pagePoubelles");
        pagePoubelles->setStyleSheet(QString::fromUtf8("background-color: #f8fafc;"));
        verticalLayout = new QVBoxLayout(pagePoubelles);
        verticalLayout->setSpacing(25);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(25, 25, 25, 25);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_15 = new QLabel(pagePoubelles);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("color: #000000; font-size: 28px; font-weight: 700;"));

        horizontalLayout_4->addWidget(label_15);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        userBadge = new QLabel(pagePoubelles);
        userBadge->setObjectName("userBadge");
        userBadge->setStyleSheet(QString::fromUtf8("background-color: #dbeafe; color: #1e40af; padding: 8px 16px; border-radius: 20px; font-weight: 600; font-size: 13px;"));

        horizontalLayout_4->addWidget(userBadge);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(25);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        formFrame = new QFrame(pagePoubelles);
        formFrame->setObjectName("formFrame");
        formFrame->setMinimumSize(QSize(380, 0));
        formFrame->setMaximumSize(QSize(380, 16777215));
        formFrame->setStyleSheet(QString::fromUtf8("QFrame { background: white; border-radius: 12px; border: 2px solid #e5e7eb; }"));
        verticalLayout_11 = new QVBoxLayout(formFrame);
        verticalLayout_11->setSpacing(25);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(25, 25, 25, 25);
        formTitle = new QLabel(formFrame);
        formTitle->setObjectName("formTitle");
        formTitle->setStyleSheet(QString::fromUtf8("color: #047857; font-size: 20px; font-weight: 700; padding-bottom: 10px; border-bottom: 2px solid #10b981;"));

        verticalLayout_11->addWidget(formTitle);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setVerticalSpacing(15);
        labelZone = new QLabel(formFrame);
        labelZone->setObjectName("labelZone");
        labelZone->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelZone);

        editZone = new QLineEdit(formFrame);
        editZone->setObjectName("editZone");
        editZone->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; } QLineEdit:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editZone);

        labelCapacite = new QLabel(formFrame);
        labelCapacite->setObjectName("labelCapacite");
        labelCapacite->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelCapacite);

        editCapacite = new QLineEdit(formFrame);
        editCapacite->setObjectName("editCapacite");
        editCapacite->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; } QLineEdit:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(1, QFormLayout::FieldRole, editCapacite);

        labelTypeDechet = new QLabel(formFrame);
        labelTypeDechet->setObjectName("labelTypeDechet");
        labelTypeDechet->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelTypeDechet);

        comboTypeDechet = new QComboBox(formFrame);
        comboTypeDechet->addItem(QString());
        comboTypeDechet->addItem(QString());
        comboTypeDechet->addItem(QString());
        comboTypeDechet->addItem(QString());
        comboTypeDechet->addItem(QString());
        comboTypeDechet->setObjectName("comboTypeDechet");
        comboTypeDechet->setStyleSheet(QString::fromUtf8("QComboBox { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; background: white; font-size: 14px; } QComboBox:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboTypeDechet);

        labelEtat = new QLabel(formFrame);
        labelEtat->setObjectName("labelEtat");
        labelEtat->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelEtat);

        comboEtat = new QComboBox(formFrame);
        comboEtat->addItem(QString());
        comboEtat->addItem(QString());
        comboEtat->addItem(QString());
        comboEtat->addItem(QString());
        comboEtat->addItem(QString());
        comboEtat->setObjectName("comboEtat");
        comboEtat->setStyleSheet(QString::fromUtf8("QComboBox { padding: 10px 12px; border: 2px solid #e5e7eb; border-radius: 8px; background: white; font-size: 14px; } QComboBox:focus { border: 2px solid #10b981; }"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboEtat);


        verticalLayout_11->addLayout(formLayout);

        verticalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        btnEnregistrer = new QPushButton(formFrame);
        btnEnregistrer->setObjectName("btnEnregistrer");
        btnEnregistrer->setStyleSheet(QString::fromUtf8("QPushButton { background-color: #10b981; color: white; padding: 12px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; } QPushButton:hover { background-color: #059669; }"));

        horizontalLayout_6->addWidget(btnEnregistrer);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        btnAnnuler = new QPushButton(formFrame);
        btnAnnuler->setObjectName("btnAnnuler");
        btnAnnuler->setStyleSheet(QString::fromUtf8("QPushButton { background-color: #f1f5f9; color: #64748b; padding: 12px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: 1px solid #e5e7eb; } QPushButton:hover { background-color: #e5e7eb; }"));

        horizontalLayout_6->addWidget(btnAnnuler);


        verticalLayout_11->addLayout(horizontalLayout_6);


        horizontalLayout_5->addWidget(formFrame);

        tableFrame = new QFrame(pagePoubelles);
        tableFrame->setObjectName("tableFrame");
        tableFrame->setStyleSheet(QString::fromUtf8("background: transparent;"));
        verticalLayout_12 = new QVBoxLayout(tableFrame);
        verticalLayout_12->setSpacing(20);
        verticalLayout_12->setObjectName("verticalLayout_12");
        toolbarFrame = new QFrame(tableFrame);
        toolbarFrame->setObjectName("toolbarFrame");
        toolbarFrame->setStyleSheet(QString::fromUtf8("QFrame { background: white; border-radius: 12px; border: 2px solid #e5e7eb; }"));
        horizontalLayout_7 = new QHBoxLayout(toolbarFrame);
        horizontalLayout_7->setSpacing(10);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(20, 15, 20, 15);
        btnAjouter = new QPushButton(toolbarFrame);
        btnAjouter->setObjectName("btnAjouter");
        btnAjouter->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #10b981; color: white; } QPushButton:hover { opacity: 0.9; }"));

        horizontalLayout_7->addWidget(btnAjouter);

        btnModifier = new QPushButton(toolbarFrame);
        btnModifier->setObjectName("btnModifier");
        btnModifier->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #3b82f6; color: white; } QPushButton:hover { opacity: 0.9; }"));

        horizontalLayout_7->addWidget(btnModifier);

        btnSupprimer = new QPushButton(toolbarFrame);
        btnSupprimer->setObjectName("btnSupprimer");
        btnSupprimer->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #ef4444; color: white; } QPushButton:hover { opacity: 0.9; }"));

        horizontalLayout_7->addWidget(btnSupprimer);

        btnPDF = new QPushButton(toolbarFrame);
        btnPDF->setObjectName("btnPDF");
        btnPDF->setStyleSheet(QString::fromUtf8("QPushButton { padding: 10px 20px; border-radius: 8px; font-size: 14px; font-weight: 600; border: none; min-width: 100px; background-color: #8b5cf6; color: white; } QPushButton:hover { opacity: 0.9; }"));

        horizontalLayout_7->addWidget(btnPDF);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        searchPoubelles = new QLineEdit(toolbarFrame);
        searchPoubelles->setObjectName("searchPoubelles");
        searchPoubelles->setStyleSheet(QString::fromUtf8("QLineEdit { padding: 12px 15px; border: 2px solid #e5e7eb; border-radius: 8px; font-size: 14px; min-width: 300px; } QLineEdit:focus { border: 2px solid #10b981; }"));

        horizontalLayout_7->addWidget(searchPoubelles);


        verticalLayout_12->addWidget(toolbarFrame);

        tablePoubelles = new QTableWidget(tableFrame);
        if (tablePoubelles->columnCount() < 5)
            tablePoubelles->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablePoubelles->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablePoubelles->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablePoubelles->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablePoubelles->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablePoubelles->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tablePoubelles->setObjectName("tablePoubelles");
        tablePoubelles->setStyleSheet(QString::fromUtf8("QTableWidget { border: none; gridline-color: #e5e7eb; selection-background-color: #dcfce7; selection-color: #000000; font-size: 14px; }\n"
"QHeaderView::section { background-color: #f0fdf4; color: #000000; font-weight: 700; padding: 12px 10px; border-bottom: 2px solid #10b981; border-right: 1px solid #e5e7eb; font-size: 13px; }\n"
"QTableWidget::item { padding: 10px; border-bottom: 1px solid #f8fafc; color: #000000; }\n"
"QTableWidget::item:selected { background-color: #dcfce7; color: #000000; font-weight: 600; }"));
        tablePoubelles->setAlternatingRowColors(true);
        tablePoubelles->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tablePoubelles->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tablePoubelles->setSortingEnabled(true);
        tablePoubelles->setColumnCount(5);
        tablePoubelles->horizontalHeader()->setDefaultSectionSize(140);
        tablePoubelles->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_12->addWidget(tablePoubelles);

        statsFrame = new QFrame(tableFrame);
        statsFrame->setObjectName("statsFrame");
        statsFrame->setStyleSheet(QString::fromUtf8("QFrame { background: #f0fdf4; border-radius: 12px; border: 2px solid #bbf7d0; padding: 12px; }"));
        horizontalLayout_stats = new QHBoxLayout(statsFrame);
        horizontalLayout_stats->setObjectName("horizontalLayout_stats");
        statsLabel = new QLabel(statsFrame);
        statsLabel->setObjectName("statsLabel");
        statsLabel->setStyleSheet(QString::fromUtf8("color: #065f46; font-weight: 700; font-size: 15px;"));

        horizontalLayout_stats->addWidget(statsLabel);


        verticalLayout_12->addWidget(statsFrame);


        horizontalLayout_5->addWidget(tableFrame);


        verticalLayout->addLayout(horizontalLayout_5);

        stackedWidget->addWidget(pagePoubelles);

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
        btnPoubelles->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221\357\270\217 Poubelles", nullptr));
        btnChauffeurs->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244 Chauffeurs", nullptr));
        btnDechets->setText(QCoreApplication::translate("MainWindow", "\342\231\273\357\270\217 D\303\251chets", nullptr));
        btnPointsRecyclage->setText(QCoreApplication::translate("MainWindow", "\360\237\223\215 Points Recyclage", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "\342\217\273 Quitter", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221\357\270\217 Gestion des Poubelles", nullptr));
        userBadge->setText(QCoreApplication::translate("MainWindow", "Responsable Collecte", nullptr));
        formTitle->setText(QCoreApplication::translate("MainWindow", "Formulaire Poubelle", nullptr));
        labelZone->setText(QCoreApplication::translate("MainWindow", "Zone :", nullptr));
        editZone->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: Ariana, Centre-ville", nullptr));
        labelCapacite->setText(QCoreApplication::translate("MainWindow", "Capacit\303\251 :", nullptr));
        editCapacite->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: 240 L", nullptr));
        labelTypeDechet->setText(QCoreApplication::translate("MainWindow", "Type d\303\251chet :", nullptr));
        comboTypeDechet->setItemText(0, QCoreApplication::translate("MainWindow", "Plastique", nullptr));
        comboTypeDechet->setItemText(1, QCoreApplication::translate("MainWindow", "Verre", nullptr));
        comboTypeDechet->setItemText(2, QCoreApplication::translate("MainWindow", "Papier / Carton", nullptr));
        comboTypeDechet->setItemText(3, QCoreApplication::translate("MainWindow", "Organique", nullptr));
        comboTypeDechet->setItemText(4, QCoreApplication::translate("MainWindow", "Autres", nullptr));

        labelEtat->setText(QCoreApplication::translate("MainWindow", "\303\211tat :", nullptr));
        comboEtat->setItemText(0, QCoreApplication::translate("MainWindow", "Bon", nullptr));
        comboEtat->setItemText(1, QCoreApplication::translate("MainWindow", "Endommag\303\251e", nullptr));
        comboEtat->setItemText(2, QCoreApplication::translate("MainWindow", "Pleine", nullptr));
        comboEtat->setItemText(3, QCoreApplication::translate("MainWindow", "\303\200 vider", nullptr));
        comboEtat->setItemText(4, QCoreApplication::translate("MainWindow", "Manquante", nullptr));

        btnEnregistrer->setText(QCoreApplication::translate("MainWindow", "\360\237\222\276 Enregistrer", nullptr));
        btnAnnuler->setText(QCoreApplication::translate("MainWindow", "\342\206\272 Annuler", nullptr));
        btnAjouter->setText(QCoreApplication::translate("MainWindow", "\342\236\225 Ajouter", nullptr));
        btnModifier->setText(QCoreApplication::translate("MainWindow", "\342\234\217 Modifier", nullptr));
        btnSupprimer->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221 Supprimer", nullptr));
        btnPDF->setText(QCoreApplication::translate("MainWindow", "\360\237\223\204 PDF", nullptr));
        searchPoubelles->setPlaceholderText(QCoreApplication::translate("MainWindow", "\360\237\224\215 Rechercher une poubelle...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablePoubelles->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablePoubelles->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Zone", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablePoubelles->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Capacit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablePoubelles->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Type d\303\251chet", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablePoubelles->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\303\211tat", nullptr));
        statsLabel->setText(QCoreApplication::translate("MainWindow", "\360\237\223\212 42 poubelles \342\200\242 18 pleines \342\200\242 7 organiques \342\200\242 5 endommag\303\251es \342\200\242 62% taux moyen de remplissage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
