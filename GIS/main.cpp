#include "GIS.h"
#include <QtWidgets/QApplication>
#include <gdal.h>
int main(int argc, char *argv[])
{
	GDALAllRegister();
	GDALDestroyDriverManager();
}
