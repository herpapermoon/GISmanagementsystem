#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GIS.h"

class GIS : public QMainWindow
{
    Q_OBJECT

public:
    GIS(QWidget *parent = nullptr);
    ~GIS();

private:
    Ui::GISClass ui;
};
