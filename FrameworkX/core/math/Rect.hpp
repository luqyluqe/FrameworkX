#ifndef Rect_hpp
#define Rect_hpp

#include <stdio.h>
#include "config.h"

BEGIN_NAMESPACE_FRAMEWORKX

class Rect
{
public:
    Rect(double left,double top,double right,double bottom);
    double left;
    double top;
    double right;
    double bottom;
};

END_NAMESPACE_FRAMEWORKX

#endif /* Rect_hpp */
