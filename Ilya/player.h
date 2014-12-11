#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsObject>

class Player : public QGraphicsObject
{
//    Q_OBJECT
public:
    explicit Player();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;

//signals:
//public slots:
    void advance();
};

#endif // PLAYER_H
