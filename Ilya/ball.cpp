#include "ball.h"
#include "QPainter"
#include "qdebug.h"

Ball::Ball()
{
}

void Ball::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    int radius = 10;
    painter->setBrush(QBrush(Qt::blue));
//    painter->drawEllipse(centerX-radius,centerY-radius,radius * 2,radius * 2);
    painter->drawEllipse(-radius,-radius,radius * 2,radius * 2);
}

QRectF Ball::boundingRect() const{
    return QRectF(-10,-10,40,40);
}

void Ball::advance(){
    this->setRotation(2);
    this->setPos(this->x()+1,this->y());
}
