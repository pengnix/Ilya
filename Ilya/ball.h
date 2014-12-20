#ifndef BALL_H
#define BALL_H

#include <QGraphicsObject>
#include <mvector.h>

class Ball : public QGraphicsObject
{
    Q_OBJECT
public:
    explicit Ball();
    explicit Ball(MVector&);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;

//signals:

//public slots:
    void advance();
private:
    MVector head;

};

#endif // BALL_H
