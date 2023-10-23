#pragma once

#include <memory>
#include <QtWidgets>


class FileSystem{

public:
    FileSystem();
    void show();

private:
    std::unique_ptr<QMainWindow> mainWindow;
    QTreeView fileTreeView;
    QFileSystemModel fileSystemModel;
    QLineEdit filterLineEdit;
    QVBoxLayout mainLayout;
    QWidget centralWidget;

};
