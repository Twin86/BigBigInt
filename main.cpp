#include <QCoreApplication>
#include <interface.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Interface program;
    program.showNumber(program.getNumber());

    return a.exec();
}
