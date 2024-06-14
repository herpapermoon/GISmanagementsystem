#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GISmanagementsystem.h"

class GISmanagementsystem : public QMainWindow
{
    Q_OBJECT

public:
    GISmanagementsystem(QWidget *parent = nullptr);
    ~GISmanagementsystem();

private:
    Ui::GISmanagementsystemClass ui;
};
