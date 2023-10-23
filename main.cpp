#include <QtWidgets>
#include "src/FileSystem.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    FileSystem sys;
    sys.show();

    return app.exec();
}
