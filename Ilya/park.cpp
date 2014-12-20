#include "park.h"
#include "player.h"
#include "qpen.h"
#include <ball.h>
#include <qtimer.h>

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
    MVector *ballHead = new MVector(5,5);
    ballHead->normal();
    ball = new Ball(*ballHead);
    ball->setPos(500,250);
    scene->addItem(ball);
//    for(int i=0;i<3;i++){
        player = new Player;
        player->setPos(100,100);
        scene->addItem(player);
//    }

    setScene(scene);
    QTimer *timer = new QTimer;
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(advance()));
    timer->start(30);
}

void Park::advance(){
//player->advance();
ball->advance();
}
