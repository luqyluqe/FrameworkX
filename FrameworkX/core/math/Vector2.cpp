#include <math.h>

#include "Vector2.h"

BEGIN_NAMESPACE_FRAMEWORKX

Vector2::Vector2():_x(0),_y(0){}

Vector2::Vector2(double px,double py):_x(px),_y(py){}

Vector2::Vector2(const Vector2& v):_x(v._x),_y(v._y){}

const Vector2& Vector2::operator =(const Vector2& v)
{
	_x=v._x;
	_y=v._y;
	return *this;
}

Vector2::Vector2(const Vector2& v1,const Vector2& v2)
{
	Vector2();
	_x=v2._x-v1._x;
	_y=v2._y-v1._y;
}

Vector2 Vector2::zeroVector2()
{
    return Vector2(0,0);
}
Vector2 Vector2::Vector2Make(double modulus, double radian)
{
    return Vector2(modulus*cos(radian),modulus*sin(radian));
}

double Vector2::x()const
{
    return _x;
}
double Vector2::y()const
{
    return _y;
}

double Vector2::modulus()const
{
    return sqrt(_x*_x+_y*_y);
}

Vector2 Vector2::unitVector2()const
{
	double mod=modulus();
	return Vector2(_x/mod,_y/mod);
}

double Vector2::radian()const
{
	double mod=modulus();
    if(_y>=0)
    {
        return acos(_x/mod);
    }
    else
    {
        return -acos(_x/mod);
    }
}

double Vector2::dotProductWith(const Vector2& v)const
{
	return _x*v._x+_y*v._y;
}

double Vector2::crossProductWith(const Vector2& v)const
{
	return _x*v._y-_y*v._x;
}



double Vector2::radianWith(const Vector2 &v)const
{
    double result=acos(dotProductWith(v)/modulus()*v.modulus());
    if (this->crossProductWith(v)<0)
    {
    	result=-result;
    }
    return result;
}

Vector2 Vector2::rotate(double radian)const
{
    Vector2 v=*this;
    v.rotateBy(radian);
    return v;
}

Vector2 Vector2::operator+(const Vector2& v)const
{
	return Vector2(_x+v._x,_y+v._y);
}
Vector2 Vector2::operator-(const Vector2& v)const
{
    return Vector2(_x-v._x,_y-v._y);
}
Vector2 Vector2::operator*(double number)const
{
	return Vector2(_x*number,_y*number);
}
Vector2 Vector2::operator/(double number)const
{
	return Vector2(_x/number,_y/number);
}
void Vector2::operator+=(const Vector2& v)
{
	_x+=v._x;
	_y+=v._y;
}

void Vector2::symmetrizeAbout(const Vector2& axis)
{
	double radian=this->radianWith(axis);
	rotateBy(radian*2);
}

void Vector2::rotateBy(double rad)
{
	double r=radian();
	r+=rad;
    double mod=modulus();
	_x=mod*cos(r);
	_y=mod*sin(r);
}

double Vector2::componentAlongAxis(const Vector2 &dir)const
{
    Vector2 u=dir.unitVector2();
    return u.dotProductWith(*this);
}

string Vector2::description()const
{
	stringstream ss;
	ss<<"("<<_x<<" "<<_y<<")";
	return ss.str();
}

END_NAMESPACE_FRAMEWORKX
