#ifndef __FrameworkX__Entity__
#define __FrameworkX__Entity__

#include "config.h"

class Layer;

BEGIN_NAMESPACE_FRAMEWORKX

class Entity
{
public:
    //Constructor
    Entity();
private:
    const Layer& layer;
};

END_NAMESPACE_FRAMEWORKX

#endif /* defined(__FrameworkX__Entity__) */
