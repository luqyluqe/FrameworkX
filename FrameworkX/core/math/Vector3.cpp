#include "Vector3.h"

BEGIN_NAMESPACE_FRAMEWORKX

Vector3::Vector3(double x,double y,double z):_x(x),_y(y),_z(z){}

Vector3::Vector3(const Vector3&  v):_x(v._x),_y(v._y),_z(v._z){}

double Vector3::x()const
{
    return _x;
}

double Vector3::y()const
{
    return _y;
}

double Vector3::z()const
{
    return _z;
}

void Vector3::operator+=(const Vector3& v)
{
    _x+=v._x;
    _y+=v._y;
    _z+=v._z;
}

END_NAMESPACE_FRAMEWORKX