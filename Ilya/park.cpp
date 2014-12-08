#include "park.h"
#include "qpen.h"
#include <ball.h>

Park::Park(QWidget *parent) :
    QGraphicsView(parent)
{
    init();
}

void Park::init(){
    setMinimumSize(1000,500);
    setMaximumSize(1000,500);
    QGraphicsScene *scene = new QGraphicsScene;

    scene->setBackgroundBrush(Qt::green);
    QPen pen(Qt::white);
    int side = 30;
    scene->addRect(side,side,500-side,500-side * 2,pen);
    scene->addRect(500,side,500-side,500-side * 2,pen);
    scene->addEllipse(350,100,300,300,pen);
    scene->addRect(side,500/2 - 200 /2 ,80,200,pen);
    scene->addRect(1000 - side - 80,500/2 - 200 /2 ,80,200,pen);

    ball = new Ball;
    scene->addItem(ball);

    setScene(scene);
}
