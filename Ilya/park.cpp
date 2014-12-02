#include "park.h"

Park::Park(QWidget *parent) :
    QGraphicsView(parent)
{
    setMinimumSize(1000,500);
    setMaximumSize(1000,500);
    QGraphicsScene *scene = new QGraphicsScene;

    scene->addText("Hello World");

    setScene(scene);
}
