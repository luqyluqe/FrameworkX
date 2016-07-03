#ifndef __FrameworkX__Vector2__
#define __FrameworkX__Vector2__

#include <math.h>
#include <string>
#include <sstream>

#include "config.h"

using namespace std;

BEGIN_NAMESPACE_FRAMEWORKX

class Vector2
{
public:
    //Debugging
    string description()const;
    
	//Constructor
	Vector2();
	Vector2(double x,double y);
	Vector2(const Vector2& v);
    
    //Copy constructor
	const Vector2& operator =(const Vector2& v);
	Vector2(const Vector2& v1,const Vector2& v2);
    
    //Static function
    static Vector2 zeroVector2();
    static Vector2 Vector2Make(double modulus,double radian);
    
    //Accessor
    double x()const;
    double y()const;

    //Properties
	Vector2 unitVector2()const;
	double modulus()const;
	double radian()const;

	//Arithmetic
	Vector2 operator+(const Vector2& v)const;
    Vector2 operator-(const Vector2& v)const;
	Vector2 operator*(double number)const;
	Vector2 operator/(double number)const;
	void operator+=(const Vector2& v);
	double dotProductWith(const Vector2& v)const;
	double crossProductWith(const Vector2& v)const;
    double radianWith(const Vector2& v)const;
    Vector2 rotate(double radian)const;

    //Transformation
    void symmetrizeAbout(const Vector2& axis);
    void rotateBy(double radian);
    
    //Relation
    double componentAlongAxis(const Vector2& dir)const;
    

private:
	double _x;
	double _y;
};

END_NAMESPACE_FRAMEWORKX

#endif
