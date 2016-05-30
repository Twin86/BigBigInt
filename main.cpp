#include <QCoreApplication>
#include <interface.h>
#include <algorithm.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Interface program;

    Algorithm algorytm;
    char temp = algorytm.addSingleNumber('0','0');
    algorytm.swap = false;
    temp = algorytm.addSingleNumber('1','0');
    algorytm.swap = false;
    temp = algorytm.addSingleNumber('1','1');
    algorytm.swap = false;
    temp = algorytm.addSingleNumber('0','1');
    program.showNumber(program.getNumber());

    return a.exec();
}
