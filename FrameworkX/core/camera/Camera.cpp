#include "Camera.h"

BEGIN_NAMESPACE_FRAMEWORKX

Camera::Camera(const Vector3& coordinates,const Rect& frame):coordinates(coordinates),frame(frame),orientation(Vector2(0, 1)){}

Camera::Camera(const Vector3& coordinates,const Rect& frame,const Vector2& orientation):coordinates(coordinates),frame(frame),orientation(orientation),scale(1){}

void Camera::translate(float x, float y)
{
    translate(Vector2(x, y));
}

void Camera::translate(float x, float y, float z)
{
    translate(Vector3(x, y, z));
}

void Camera::translate(const Vector2& vector)
{
    translate(Vector3(vector.x(),vector.y(),coordinates.z()));
}

void Camera::translate(const Vector3& vector)
{
    this->coordinates+=vector;
}

void Camera::zoom(float scale)
{
    this->scale*=scale;
}

void Camera::setScale(float scale)
{
    this->scale=scale;
}

float Camera::getScale()const
{
    return scale;
}

END_NAMESPACE_FRAMEWORKX