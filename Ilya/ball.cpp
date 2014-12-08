#include "ball.h"
#include "QPainter"

Ball::Ball() : centerX(500),centerY(250)
{
}

void Ball::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    int radius = 10;
    painter->setBrush(QBrush(Qt::blue));
    painter->drawEllipse(centerX-radius,centerY-radius,radius * 2,radius * 2);
}

QRectF Ball::boundingRect() const{

}
