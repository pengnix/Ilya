#include "player.h"
#include "QPainter"
#include "qpolygon.h"

Player::Player()
{
}

void Player::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    int radius = 10;
    double gensan = 1.732;
    painter->setBrush(QBrush(Qt::red));
    const int arr[] = { + radius,0, - gensan/2*radius, + radius/2, - gensan/2*radius, - radius/2};
    painter->drawPolygon(QPolygon(3,arr));
}

QRectF Player::boundingRect() const{
    return QRectF(-10,-10,40,40);
}

void Player::advance(){
    this->setRotation(this->rotation()+10);
    this->setPos(this->x()+1,this->y());
}
