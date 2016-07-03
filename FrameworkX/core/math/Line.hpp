#ifndef Line_hpp
#define Line_hpp

#include <stdio.h>
#include "Vector3.h"
#include "Vector2.h"
#include "ArithmeticException.hpp"

BEGIN_NAMESPACE_FRAMEWORKX

class Line
{
public:
    Line(const Vector3& point,const Vector3& direction);
    Vector2 crossoverPointWithZPlane(double z)const throw(ArithmeticException);
private:
    Vector3 point;
    Vector3 direction;
};

END_NAMESPACE_FRAMEWORKX

#endif /* Line_hpp */
