#ifndef MVECTOR_H
#define MVECTOR_H

class MVector
{
public:
    MVector();
    MVector(double x, double y);
    double getX();
    double getY();
    void normal();
private:
    double x;
    double y;
};

#endif // MVECTOR_H
