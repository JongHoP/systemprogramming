#include <QtWidgets>
#include <QtUiTools>
#include <QFileDialog>
int main(int argc, char **argv){

    Q_INIT_RESOURCE(Talk);
    QApplication app(argc, argv);
    QUiLoader loader;

    QFile file(":Talk.ui");
    file.open(0);
    QWidget *widget = loader.load(&file);
    file.close();

    widget->show();
    return app.exec();
}