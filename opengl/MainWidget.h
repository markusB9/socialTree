#ifndef MAINWIDGET_H
#define MAINWIDGET_H


#include <QtOpenGL/QGLWidget>
#include <QtOpenGL/QGLFunctions>
#include <QMatrix4x4>
#include <QQuaternion>
#include <QVector2D>
#include <QBasicTimer>
#include <QtOpenGL/QGLShaderProgram>
#include <opengl/VBORender.h>


class MainWidget : public QGLWidget, protected QGLFunctions
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    void timerEvent(QTimerEvent *e);

    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();

    void initShaders();
    void initTextures();

private:
    QBasicTimer timer;
    QGLShaderProgram program;

    VBORender render;


    QMatrix4x4 projection;
};

#endif // MAINWIDGET_H
