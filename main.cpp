#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    a.setApplicationVersion("1.1.2");

    return a.exec();
}
