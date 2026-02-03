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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *logoLabel;
    QPushButton *btnFournisseurs;
    QPushButton *btnCamions;
    QPushButton *btnPoubelles;
    QPushButton *btnChauffeurs;
    QPushButton *btnDechets;
    QPushButton *btnPointsRecyclage;
    QPushButton *btnExit;
    QFrame *tableContainer;
    QFrame *toolbarFrame;
    QLineEdit *searchCamions;
    QPushButton *btnModifier;
    QPushButton *btnAjouter;
    QPushButton *btnSupprimer;
    QPushButton *btnPDF;
    QPushButton *btnPDF_2;
    QPushButton *btnPDF_3;
    QTableWidget *tableWidget_2;
    QCalendarWidget *calendarWidget;
    QGroupBox *groupBox;
    QFrame *formFrame;
    QLabel *formTitle;
    QLabel *labelMatricule;
    QLabel *labelCapacite;
    QLabel *labelEtat;
    QLabel *labelDisponibilite;
    QLineEdit *editMatricule;
    QLineEdit *editCapacite;
    QComboBox *comboEtat;
    QComboBox *comboDisponibilite;
    QLabel *label_15;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1747, 884);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 201, 861));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"  background-color: #1e40af;\n"
"  border-right: 2px solid #1e3a8a;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        logoLabel = new QLabel(frame);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setGeometry(QRect(0, 10, 131, 37));
        logoLabel->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"font-size: 19px;\n"
"font-weight: 700;\n"
"padding-bottom: 5px;"));
        btnFournisseurs = new QPushButton(frame);
        btnFournisseurs->setObjectName("btnFournisseurs");
        btnFournisseurs->setGeometry(QRect(-10, 70, 218, 44));
        btnFournisseurs->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: #e5e7eb;\n"
"  background: transparent;\n"
"  text-align: left;\n"
"  padding: 12px 16px;\n"
"  border-radius: 8px;\n"
"  font-size: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: #2563eb;\n"
"  color: white;\n"
"}"));
        btnCamions = new QPushButton(frame);
        btnCamions->setObjectName("btnCamions");
        btnCamions->setGeometry(QRect(0, 120, 121, 44));
        btnCamions->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: white;\n"
"  background-color: #3b82f6;\n"
"  text-align: left;\n"
"  padding: 12px 16px;\n"
"  border-radius: 8px;\n"
"  font-size: 15px;\n"
"  font-weight: bold;\n"
"}"));
        btnPoubelles = new QPushButton(frame);
        btnPoubelles->setObjectName("btnPoubelles");
        btnPoubelles->setGeometry(QRect(-10, 170, 218, 44));
        btnPoubelles->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: #e5e7eb;\n"
"  background: transparent;\n"
"  text-align: left;\n"
"  padding: 12px 16px;\n"
"  border-radius: 8px;\n"
"  font-size: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: #2563eb;\n"
"  color: white;\n"
"}"));
        btnChauffeurs = new QPushButton(frame);
        btnChauffeurs->setObjectName("btnChauffeurs");
        btnChauffeurs->setGeometry(QRect(-10, 220, 131, 44));
        btnChauffeurs->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: #e5e7eb;\n"
"  background: transparent;\n"
"  text-align: left;\n"
"  padding: 12px 16px;\n"
"  border-radius: 8px;\n"
"  font-size: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: #2563eb;\n"
"  color: white;\n"
"}"));
        btnDechets = new QPushButton(frame);
        btnDechets->setObjectName("btnDechets");
        btnDechets->setGeometry(QRect(-10, 260, 218, 44));
        btnDechets->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: #e5e7eb;\n"
"  background: transparent;\n"
"  text-align: left;\n"
"  padding: 12px 16px;\n"
"  border-radius: 8px;\n"
"  font-size: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: #2563eb;\n"
"  color: white;\n"
"}"));
        btnPointsRecyclage = new QPushButton(frame);
        btnPointsRecyclage->setObjectName("btnPointsRecyclage");
        btnPointsRecyclage->setGeometry(QRect(-10, 300, 171, 44));
        btnPointsRecyclage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: #e5e7eb;\n"
"  background: transparent;\n"
"  text-align: left;\n"
"  padding: 12px 16px;\n"
"  border-radius: 8px;\n"
"  font-size: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: #2563eb;\n"
"  color: white;\n"
"}"));
        btnExit = new QPushButton(frame);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(0, 370, 218, 41));
        btnExit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: #e5e7eb;\n"
"  background: transparent;\n"
"  text-align: left;\n"
"  padding: 12px 16px;\n"
"  border-radius: 8px;\n"
"  font-size: 15px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: #2563eb;\n"
"  color: white;\n"
"}"));
        tableContainer = new QFrame(centralwidget);
        tableContainer->setObjectName("tableContainer");
        tableContainer->setGeometry(QRect(600, 120, 1061, 671));
        tableContainer->setStyleSheet(QString::fromUtf8("QFrame {\n"
"  background: white;\n"
"  border-radius: 12px;\n"
"  border: 2px solid #e5e7eb;\n"
"}"));
        tableContainer->setFrameShape(QFrame::Shape::StyledPanel);
        tableContainer->setFrameShadow(QFrame::Shadow::Raised);
        toolbarFrame = new QFrame(tableContainer);
        toolbarFrame->setObjectName("toolbarFrame");
        toolbarFrame->setGeometry(QRect(40, 380, 941, 131));
        toolbarFrame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"  background: white;\n"
"  border-radius: 12px;\n"
"  border: 2px solid #e5e7eb;\n"
"}"));
        toolbarFrame->setFrameShape(QFrame::Shape::StyledPanel);
        toolbarFrame->setFrameShadow(QFrame::Shadow::Raised);
        searchCamions = new QLineEdit(toolbarFrame);
        searchCamions->setObjectName("searchCamions");
        searchCamions->setGeometry(QRect(580, 10, 334, 49));
        searchCamions->setMinimumSize(QSize(334, 40));
        searchCamions->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  padding: 12px 15px;\n"
"  border: 2px solid #e5e7eb;\n"
"  border-radius: 8px;\n"
"  font-size: 14px;\n"
"  color: #000000;\n"
"  background: white;\n"
"  min-width: 300px;\n"
"}\n"
"QLineEdit:focus {\n"
"  border: 2px solid #10b981;\n"
"}"));
        btnModifier = new QPushButton(toolbarFrame);
        btnModifier->setObjectName("btnModifier");
        btnModifier->setGeometry(QRect(170, 80, 140, 39));
        btnModifier->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  padding: 10px 20px;\n"
"  border-radius: 8px;\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  border: none;\n"
"  min-width: 100px;\n"
"  background-color: #3b82f6;\n"
"  color: white;\n"
"}\n"
"QPushButton:hover {\n"
"  opacity: 0.9;\n"
"}"));
        btnAjouter = new QPushButton(toolbarFrame);
        btnAjouter->setObjectName("btnAjouter");
        btnAjouter->setGeometry(QRect(20, 80, 140, 39));
        btnAjouter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  padding: 10px 20px;\n"
"  border-radius: 8px;\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  border: none;\n"
"  min-width: 100px;\n"
"  background-color:#3b82f6;\n"
"  color: white;\n"
"}\n"
"QPushButton:hover {\n"
"  opacity: 0.9;\n"
"}"));
        btnSupprimer = new QPushButton(toolbarFrame);
        btnSupprimer->setObjectName("btnSupprimer");
        btnSupprimer->setGeometry(QRect(320, 80, 140, 39));
        btnSupprimer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  padding: 10px 20px;\n"
"  border-radius: 8px;\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  border: none;\n"
"  min-width: 100px;\n"
"  background-color: #3b82f6;\n"
"  color: white;\n"
"}\n"
"QPushButton:hover {\n"
"  opacity: 0.9;\n"
"}"));
        btnPDF = new QPushButton(toolbarFrame);
        btnPDF->setObjectName("btnPDF");
        btnPDF->setGeometry(QRect(470, 80, 140, 39));
        btnPDF->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  padding: 10px 20px;\n"
"  border-radius: 8px;\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  border: none;\n"
"  min-width: 100px;\n"
"  background-color: #3b82f6;\n"
"  color: white;\n"
"}\n"
"QPushButton:hover {\n"
"  opacity: 0.9;\n"
"}"));
        btnPDF_2 = new QPushButton(toolbarFrame);
        btnPDF_2->setObjectName("btnPDF_2");
        btnPDF_2->setGeometry(QRect(620, 80, 140, 39));
        btnPDF_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  padding: 10px 20px;\n"
"  border-radius: 8px;\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  border: none;\n"
"  min-width: 100px;\n"
"  background-color:#3b82f6;\n"
"  color: white;\n"
"}\n"
"QPushButton:hover {\n"
"  opacity: 0.9;\n"
"}"));
        btnPDF_3 = new QPushButton(toolbarFrame);
        btnPDF_3->setObjectName("btnPDF_3");
        btnPDF_3->setGeometry(QRect(770, 80, 140, 39));
        btnPDF_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  padding: 10px 20px;\n"
"  border-radius: 8px;\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  border: none;\n"
"  min-width: 100px;\n"
"  background-color:#3b82f6;\n"
"  color: white;\n"
"}\n"
"QPushButton:hover {\n"
"  opacity: 0.9;\n"
"}"));
        tableWidget_2 = new QTableWidget(tableContainer);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(50, 20, 501, 301));
        tableWidget_2->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"  border: none;\n"
"  gridline-color: #e5e7eb;\n"
"  selection-background-color: #dcfce7;\n"
"  selection-color: #000000;\n"
"  font-size: 14px;\n"
"}\n"
"QHeaderView::section {\n"
"  background-color: #f0fdf4;\n"
"  color: #000000;\n"
"  font-weight: 700;\n"
"  padding: 12px 10px;\n"
"  border-bottom: 2px solid #10b981;\n"
"  border-right: 1px solid #e5e7eb;\n"
"  font-size: 13px;\n"
"}\n"
"QTableWidget::item {\n"
"  padding: 10px;\n"
"  border-bottom: 1px solid #f8fafc;\n"
"  color: #000000;\n"
"}\n"
"QTableWidget::item:selected {\n"
"  background-color: #dcfce7;\n"
"  color: #000000;\n"
"  font-weight: 600;\n"
"}\n"
""));
        calendarWidget = new QCalendarWidget(tableContainer);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(670, 20, 321, 281));
        groupBox = new QGroupBox(tableContainer);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 520, 951, 121));
        groupBox->setStyleSheet(QString::fromUtf8("/* \360\237\214\237 QGroupBox fond presque blanc avec bleu et gris tr\303\250s subtil */\n"
"QGroupBox {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #F8FAFC,   /* blanc avec un peu de gris */\n"
"        stop:1 #EFF5FA    /* bleu tr\303\250s tr\303\250s p\303\242le + gris l\303\251ger */\n"
"    );\n"
"    border: 2px solid #D1D9E6;  /* gris tr\303\250s clair pour la bordure */\n"
"    border-radius: 16px;\n"
"    margin-top: 22px;\n"
"    padding-top: 30px;\n"
"    font-weight: 600;\n"
"    font-size: 14px;\n"
"    color: #032242;\n"
"}\n"
"\n"
"/* Effet de relief */\n"
"QGroupBox {\n"
"    border-bottom: 3px solid #C0C8D8; /* gris tr\303\250s clair pour le relief */\n"
"}\n"
"\n"
"/* \360\237\224\265 Titre = couleur de r\303\251f\303\251rence #3b82f6 */\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 7px 20px;\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        st"
                        "op:0 #3b82f6,\n"
"        stop:0.5 #5a95f8,\n"
"        stop:1 #3b82f6\n"
"    );\n"
"    color: #ffffff; /* texte blanc pour contraste */\n"
"    border: 2px solid #3b82f6;\n"
"    border-radius: 10px;\n"
"    margin-left: 16px;\n"
"    font-weight: 700;\n"
"    letter-spacing: 0.7px;\n"
"}\n"
"\n"
"/* \360\237\224\271 Bouton statistique avec la m\303\252me couleur de r\303\251f\303\251rence */\n"
"QPushButton#statButton {\n"
"    background-color: #3b82f6;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"    font-weight: 600;\n"
"}\n"
"QPushButton#statButton:hover {\n"
"    background-color: #60a0f8;\n"
"}\n"
"QPushButton#statButton:pressed {\n"
"    background-color: #2565d6;\n"
"}\n"
"\n"
"\n"
""));
        formFrame = new QFrame(centralwidget);
        formFrame->setObjectName("formFrame");
        formFrame->setGeometry(QRect(210, 120, 380, 519));
        formFrame->setMinimumSize(QSize(380, 0));
        formFrame->setMaximumSize(QSize(380, 16777215));
        formFrame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"  background: white;\n"
"  border-radius: 12px;\n"
"  border: 2px solid #e5e7eb;\n"
"}"));
        formFrame->setFrameShape(QFrame::Shape::StyledPanel);
        formFrame->setFrameShadow(QFrame::Shadow::Raised);
        formTitle = new QLabel(formFrame);
        formTitle->setObjectName("formTitle");
        formTitle->setGeometry(QRect(27, 27, 195, 41));
        formTitle->setStyleSheet(QString::fromUtf8("color: #047857;\n"
"font-size: 20px;\n"
"font-weight: 700;\n"
"padding-bottom: 10px;\n"
"border-bottom: 2px solid #10b981;"));
        labelMatricule = new QLabel(formFrame);
        labelMatricule->setObjectName("labelMatricule");
        labelMatricule->setGeometry(QRect(20, 130, 101, 31));
        labelMatricule->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));
        labelCapacite = new QLabel(formFrame);
        labelCapacite->setObjectName("labelCapacite");
        labelCapacite->setGeometry(QRect(20, 180, 101, 31));
        labelCapacite->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));
        labelEtat = new QLabel(formFrame);
        labelEtat->setObjectName("labelEtat");
        labelEtat->setGeometry(QRect(20, 230, 101, 31));
        labelEtat->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));
        labelDisponibilite = new QLabel(formFrame);
        labelDisponibilite->setObjectName("labelDisponibilite");
        labelDisponibilite->setGeometry(QRect(20, 280, 101, 31));
        labelDisponibilite->setStyleSheet(QString::fromUtf8("color: #000000; font-weight: 600; font-size: 14px;"));
        editMatricule = new QLineEdit(formFrame);
        editMatricule->setObjectName("editMatricule");
        editMatricule->setGeometry(QRect(130, 120, 219, 41));
        editMatricule->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 12px 15px;\n"
"    border: 2px solid #d1d5db;\n"
"    border-radius: 10px;\n"
"    font-size: 15px;\n"
"    color: #1f2937;\n"
"    background-color: white;\n"
"    selection-background-color: #10b981;\n"
"    selection-color: white;\n"
"    font-family: \"Segoe UI\", \"Roboto\", sans-serif;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #10b981;\n"
"    border-left: 2px solid #10b981;\n"
"    border-right: 2px solid #10b981;\n"
"    background-color: #f9fafb;\n"
"    border-bottom: 4px solid #10b981;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border: 2px solid #9ca3af;\n"
"    background-color: #f9fafb;\n"
"}\n"
"\n"
"QLineEdit:disabled {\n"
"    background-color: #f3f4f6;\n"
"    color: #9ca3af;\n"
"    border: 2px solid #e5e7eb;\n"
"}\n"
"\n"
"QLineEdit[readOnly=\"true\"] {\n"
"    background-color: #f9fafb;\n"
"    color: #6b7280;\n"
"    border: 2px solid #e5e7eb;\n"
"    font-style: italic;\n"
"}"));
        editCapacite = new QLineEdit(formFrame);
        editCapacite->setObjectName("editCapacite");
        editCapacite->setGeometry(QRect(130, 170, 219, 51));
        editCapacite->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 12px 15px;\n"
"    border: 2px solid #d1d5db;\n"
"    border-radius: 10px;\n"
"    font-size: 15px;\n"
"    color: #1f2937;\n"
"    background-color: white;\n"
"    selection-background-color: #10b981;\n"
"    selection-color: white;\n"
"    font-family: \"Segoe UI\", \"Roboto\", sans-serif;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #10b981;\n"
"    border-left: 2px solid #10b981;\n"
"    border-right: 2px solid #10b981;\n"
"    background-color: #f9fafb;\n"
"    border-bottom: 4px solid #10b981;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border: 2px solid #9ca3af;\n"
"    background-color: #f9fafb;\n"
"}\n"
"\n"
"QLineEdit:disabled {\n"
"    background-color: #f3f4f6;\n"
"    color: #9ca3af;\n"
"    border: 2px solid #e5e7eb;\n"
"}\n"
"\n"
"QLineEdit[readOnly=\"true\"] {\n"
"    background-color: #f9fafb;\n"
"    color: #6b7280;\n"
"    border: 2px solid #e5e7eb;\n"
"    font-style: italic;\n"
"}"));
        comboEtat = new QComboBox(formFrame);
        comboEtat->addItem(QString());
        comboEtat->addItem(QString());
        comboEtat->addItem(QString());
        comboEtat->addItem(QString());
        comboEtat->setObjectName("comboEtat");
        comboEtat->setGeometry(QRect(130, 230, 219, 41));
        comboEtat->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"  padding: 10px 12px;\n"
"  border: 2px solid #e5e7eb;\n"
"  border-radius: 8px;\n"
"  background: white;\n"
"  font-size: 14px;\n"
"  color: #000000;\n"
"}\n"
"QComboBox:focus {\n"
"  border: 2px solid #10b981;\n"
"}"));
        comboDisponibilite = new QComboBox(formFrame);
        comboDisponibilite->addItem(QString());
        comboDisponibilite->addItem(QString());
        comboDisponibilite->addItem(QString());
        comboDisponibilite->addItem(QString());
        comboDisponibilite->setObjectName("comboDisponibilite");
        comboDisponibilite->setGeometry(QRect(130, 280, 219, 41));
        comboDisponibilite->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"  padding: 10px 12px;\n"
"  border: 2px solid #e5e7eb;\n"
"  border-radius: 8px;\n"
"  background: white;\n"
"  font-size: 14px;\n"
"  color: #000000;\n"
"}\n"
"QComboBox:focus {\n"
"  border: 2px solid #10b981;\n"
"}"));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(240, 30, 320, 37));
        label_15->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"font-size: 28px;\n"
"font-weight: 700;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1747, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        logoLabel->setText(QCoreApplication::translate("MainWindow", "\342\231\273 EcoSmart", nullptr));
        btnFournisseurs->setText(QCoreApplication::translate("MainWindow", "\360\237\217\242 Fournisseurs", nullptr));
        btnCamions->setText(QCoreApplication::translate("MainWindow", "\360\237\232\232 Camions", nullptr));
        btnPoubelles->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221\357\270\217 Poubelles", nullptr));
        btnChauffeurs->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244 Chauffeurs", nullptr));
        btnDechets->setText(QCoreApplication::translate("MainWindow", "\342\231\273\357\270\217 D\303\251chets", nullptr));
        btnPointsRecyclage->setText(QCoreApplication::translate("MainWindow", "\360\237\223\215 Points Recyclage", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "\342\217\273 Quitter", nullptr));
        searchCamions->setPlaceholderText(QCoreApplication::translate("MainWindow", "\360\237\224\215 Rechercher un camion...", nullptr));
        btnModifier->setText(QCoreApplication::translate("MainWindow", "\342\234\217 Modifier", nullptr));
        btnAjouter->setText(QCoreApplication::translate("MainWindow", "\342\236\225 Ajouter", nullptr));
        btnSupprimer->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221 Supprimer", nullptr));
        btnPDF->setText(QCoreApplication::translate("MainWindow", "\360\237\223\204 PDF", nullptr));
        btnPDF_2->setText(QCoreApplication::translate("MainWindow", "\360\237\227\272\357\270\217MAP", nullptr));
        btnPDF_3->setText(QCoreApplication::translate("MainWindow", "\360\237\223\212STATISTIQUE", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Matricule", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Capacit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Etat", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Disponibilte", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\360\237\223\212STATISTIQUE", nullptr));
        formTitle->setText(QCoreApplication::translate("MainWindow", "Formulaire Camion", nullptr));
        labelMatricule->setText(QCoreApplication::translate("MainWindow", "Matricule :", nullptr));
        labelCapacite->setText(QCoreApplication::translate("MainWindow", "Capacit\303\251 :", nullptr));
        labelEtat->setText(QCoreApplication::translate("MainWindow", "\303\211tat :", nullptr));
        labelDisponibilite->setText(QCoreApplication::translate("MainWindow", "Disponibilit\303\251 :", nullptr));
        editMatricule->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: TN-123-AB", nullptr));
        editCapacite->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex: 15 Tonnes", nullptr));
        comboEtat->setItemText(0, QCoreApplication::translate("MainWindow", "Bon \303\251tat", nullptr));
        comboEtat->setItemText(1, QCoreApplication::translate("MainWindow", "En maintenance", nullptr));
        comboEtat->setItemText(2, QCoreApplication::translate("MainWindow", "N\303\251cessite r\303\251vision", nullptr));
        comboEtat->setItemText(3, QCoreApplication::translate("MainWindow", "Excellent", nullptr));

        comboDisponibilite->setItemText(0, QCoreApplication::translate("MainWindow", "Disponible", nullptr));
        comboDisponibilite->setItemText(1, QCoreApplication::translate("MainWindow", "En mission", nullptr));
        comboDisponibilite->setItemText(2, QCoreApplication::translate("MainWindow", "Indisponible", nullptr));
        comboDisponibilite->setItemText(3, QCoreApplication::translate("MainWindow", "En r\303\251paration", nullptr));

        label_15->setText(QCoreApplication::translate("MainWindow", "\360\237\232\232 Gestion des Camions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
