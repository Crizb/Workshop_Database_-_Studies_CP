#include "mainwindow.h"
#include "main.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    std::cerr << _CrtDumpMemoryLeaks() << std::endl;
    return a.exec();
}
