#include "park.h"
#include "qpen.h"

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
    scene->addLine(side,side,1000 - side,side,pen);
    scene->addLine(side,500 - side,1000 -side,500 - side,pen);
    scene->addLine(side,side,side,500 - side,pen);
    scene->addLine(500,side,500,500 - side,pen);
    scene->addLine(1000 - side,side,1000 -side,500 - side,pen);

    setScene(scene);
}
