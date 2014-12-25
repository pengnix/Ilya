#ifndef PARK_H
#define PARK_H

#include <QGraphicsView>
#include <ball.h>
#include <player.h>
#include <QMouseEvent>

class Park : public QGraphicsView
{
    Q_OBJECT
public:
    explicit Park(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent *event);

signals:

public slots:
    void advance();
private:
    void init();
    Ball *ball;
    Player *player;

};

#endif // PARK_H
