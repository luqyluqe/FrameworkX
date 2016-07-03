#include "Line.hpp"

BEGIN_NAMESPACE_FRAMEWORKX

Line::Line(const Vector3& point,const Vector3& direction):point(point),direction(direction){}

Vector2 Line::crossoverPointWithZPlane(double z)const throw(ArithmeticException)
{
    if (point.z()==z) {
        return Vector2(point.x(), point.y());
    }
    if (direction.z()==0) {
        throw ArithmeticException("line is parrallel to the plane");
    }
    double t=(z-point.z())/direction.z();
    double x=point.x()+t*direction.x();
    double y=point.y()+t*direction.y();
    return Vector2(x,y);
}

END_NAMESPACE_FRAMEWORKX