#ifndef BALL_H
#define BALL_H

#include <QGraphicsObject>

class Ball : public QGraphicsObject
{
    Q_OBJECT
public:
    explicit Ball();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;

signals:

public slots:
private :
    int centerX;
    int centerY;

};

#endif // BALL_H
