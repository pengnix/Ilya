#ifndef PARK_H
#define PARK_H

#include <QGraphicsView>

class Park : public QGraphicsView
{
    Q_OBJECT
public:
    explicit Park(QWidget *parent = 0);

signals:

public slots:
private:
    void init();

};

#endif // PARK_H
