#include "ball.h"
#include "QPainter"
#include "qdebug.h"
#include "qcursor.h"

Ball::Ball()
{
}
Ball::Ball(MVector &head, double speed):head(head), speed(speed), acceleration(0.2f * 30/1000){

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

//    this->setRotation(2);
    this->setPos(this->x()+head.getX() * speed,this->y() + head.getY() * speed);
    if(speed < acceleration){
        speed = 0.0f;
    }else{
        speed -= acceleration;
    }
}

void Ball::setSpeed(double speed){
    this->speed = speed;
}

void Ball::setHeading(double x, double y){
    head.setX(x);
    head.setY(y);
    head.normal();
}
//void Ball::mousePressEvent(QGraphicsSceneMouseEvent *event){
////    double mX = QCursor::pos().x();
////    double mY = QCursor::pos().y();
//    double newX = event->x() - this->x();
//    double newY = event->y() - this->y();
//    head.setX(newX);
//    head.setY(newY);
//    head.normal();
//    speed = 2;
//}
