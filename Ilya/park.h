#ifndef PARK_H
#define PARK_H

#include <QGraphicsView>
#include <ball.h>

class Park : public QGraphicsView
{
    Q_OBJECT
public:
    explicit Park(QWidget *parent = 0);

signals:

public slots:
private:
    void init();
    Ball *ball;

};

#endif // PARK_H
