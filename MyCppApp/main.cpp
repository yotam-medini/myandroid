#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPushButton button("MyCppApp: Qt 6.8.0 on Android");
    button.resize(600, 300);
    button.show();

    return a.exec();
}
