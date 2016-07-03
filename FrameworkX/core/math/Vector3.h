#ifndef __FrameworkX__Vector3__
#define __FrameworkX__Vector3__

#include <math.h>
#include <string>
#include <sstream>

#include "config.h"

using namespace std;

BEGIN_NAMESPACE_FRAMEWORKX

class Vector3
{
public:
    //Debugging
    string description()const;
    
    //Constructor
//    Vector3();
    Vector3(double x,double y,double z);
    Vector3(const Vector3& v);
    
    //Accessor
    double x()const;
    double y()const;
    double z()const;
    
    //Arithmetic
    Vector3 operator+(const Vector3& v)const;
    Vector3 operator-(const Vector3& v)const;
    void operator+=(const Vector3& v);
private:
    double _x;
    double _y;
    double _z;
};

END_NAMESPACE_FRAMEWORKX

#endif /* defined(__FrameworkX__Vector3__) */
