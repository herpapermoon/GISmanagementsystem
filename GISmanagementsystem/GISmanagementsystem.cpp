#include "GISmanagementsystem.h"
#include <QMessageBox>
#include <QString>
#include<iostream>

using namespace std;
GISmanagementsystem::GISmanagementsystem(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    QString msvc_version = "MSVC Version:" + QString::number(_MSC_VER) + "\n";
    QString qt_version = "QTVersion: " + QString(QT_VERSION_STR);
    QMessageBox::information(this, "Version", msvc_version + qt_version);
}

GISmanagementsystem::~GISmanagementsystem()
{}
