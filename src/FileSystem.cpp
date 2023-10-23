#include "FileSystem.h"

#include <QFileSystemModel>


FileSystem::FileSystem():
    mainWindow(std::make_unique<QMainWindow>())
{
    mainWindow->setWindowTitle("File System Viewer");



    fileSystemModel.setRootPath(QDir::homePath()); // Установка домашней директории пользователя
    fileSystemModel.setFilter( QDir::AllDirs    | QDir::Files | QDir::AllEntries | QDir::NoDotAndDotDot | QDir::Hidden); // Отображение файлов и папок, исключая . и ..



    fileTreeView.setModel(&fileSystemModel);




    QObject::connect(&filterLineEdit, &QLineEdit::textChanged, [this](const QString &text) {
        fileSystemModel.setNameFilters(QStringList() << ("*" + text + "*"));
        fileSystemModel.setNameFilterDisables(false);
    });



    mainLayout.addWidget(&filterLineEdit);
    mainLayout.addWidget(&fileTreeView);


    centralWidget.setLayout(&mainLayout);

    mainWindow->setCentralWidget(&centralWidget);


}

void FileSystem::show()
{
    mainWindow->show();
}
