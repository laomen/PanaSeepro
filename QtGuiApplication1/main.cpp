#include "QtGuiApplication1.h"
#include <QtWidgets/QApplication>
#include "Config.h"
#include  "allModuleModel.h"
#include "allWorld.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	allModule modules;
	//modules.init();

	return a.exec();
}
