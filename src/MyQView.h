#ifndef MYQVIEW_H
#define MYQVIEW_H

#include <QtWidgets/QGraphicsView>
#include <QMouseEvent>
#include <QDebug>

class MyQView :public QGraphicsView
{
    Q_OBJECT
public:
    MyQView(QWidget *parent = nullptr);
signals:
    void mouseMoved(int x, int y, Qt::MouseButton button);
    void mousePressed(int x, int y ,Qt::MouseButton button);
    void mouseReleased(int x, int y ,Qt::MouseButton button);
    void resized();
    void setImage(QPixmap img);
protected:
    void mouseMoveEvent(QMouseEvent *eve);
    void mousePressEvent(QMouseEvent *eve);
    void mouseReleaseEvent(QMouseEvent *eve);
    void resizeEvent(QResizeEvent *eve);
};

#endif // MYQVIEW_H
