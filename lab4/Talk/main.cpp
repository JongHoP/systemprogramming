#include "Talk.h"  
#include <QtWidgets>

int main(int argc, char **argv){

    QApplication app(argc, argv);
    QMainWindow *widget = new QMainWindow;
    Ui::Talk ui;
    ui.setupUi(widget);


    widget->show();
    return app.exec();
}

