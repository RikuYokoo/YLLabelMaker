#ifndef MYQCLASS_H
#define MYQCLASS_H

#include <iostream>
#include <QObject>
#include <QtWidgets/QtWidgets>
#include <QFileInfo>
#include <QFileDialog>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QMessageBox>
#include <opencv2/opencv.hpp>
#include <QtWidgets/QGraphicsScene>
#include <QtWidgets/QGraphicsSceneMouseEvent>
#include <QTime>

enum COLORS
{
    RED = 0,
    GREEN,
    BLUE,
    ORANGE,
    YELLOW,
    AQUA,
    PURPLE,
    DARK,
    NAVY
};

class MyQclass :public QWidget
{
    Q_OBJECT
public:
    QFileInfo selectFile(QString filter);
    QDir selectDir(QDir current);
    QFileInfoList scanFiles(QString targetpath ,QString filter);
    QFileInfoList scanDirs(QString targetpath ,QString filter);
    QPixmap MatBGR2pixmap(cv::Mat src);
    QDir makeDirectory(QString targetPath, QString dirname);
    QString filenameGen(QString objectname, int num, QString extension=".png");
    QColor retColor(int color);
private:
};

#endif // MYQCLASS_H
