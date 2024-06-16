#include "GIS.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GIS w;
    w.show();
    return a.exec();
}
