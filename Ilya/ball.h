#ifndef BALL_H
#define BALL_H

#include <QGraphicsObject>
#include <mvector.h>

class Ball : public QGraphicsObject
{
    Q_OBJECT
public:
    explicit Ball();
    explicit Ball(MVector&, double speed);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    void setSpeed(double speed);
    void setHeading(double x, double y);
//    void mousePressEvent(QGraphicsSceneMouseEvent *event);

//signals:

//public slots:
    void advance();
private:
    MVector head;
    double speed;
    double acceleration;

};

#endif // BALL_H
