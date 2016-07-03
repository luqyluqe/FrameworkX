#ifndef __FrameworkX__Camera__
#define __FrameworkX__Camera__

#include "config.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Rect.hpp"

BEGIN_NAMESPACE_FRAMEWORKX

class Camera
{
public:
    //Constructor
    Camera(const Vector3& coordinates,const Rect& frame);
    Camera(const Vector3& coordinates,const Rect& frame,const Vector2& orientation);
    
    //Transformation
    void translate(float x,float y);
    void translate(float x,float y,float z);
    void translate(const Vector2& vector);
    void translate(const Vector3& vector);
    void translateTo(const Vector2& vector);
    void translateTo(const Vector3& vector);    //synonimous to setCoordinates()
    void rotate(float radian);
    void rotateTo(const Vector2& orientation);  //synonimous to setOrientation()
    void zoom(float scale);
    void zoomTo(float scale);   //synonimous to setScale()
    
    //Accessor
    const Vector3& getCoordinates()const;
    void setCoordinates(const Vector3& coordinates);
    const Vector2& getOrientation()const;
    void setOrientation(const Vector2& orientation);
    float getScale()const;
    void setScale(float scale);
private:
    Vector3 coordinates;
    Rect frame;
    Vector2 center;
    Vector2 topLeftCorner;
    Vector2 topRightCorner;
    Vector2 bottomRightCorner;
    Vector2 bottomLeftCorner;
    Vector2 orientation;
    float scale;
};

END_NAMESPACE_FRAMEWORKX

#endif /* defined(__FrameworkX__Camera__) */
