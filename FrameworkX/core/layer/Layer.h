#ifndef __FrameworkX__Layer__
#define __FrameworkX__Layer__

#include <vector>

#include "config.h"
#include "Entity.h"

using namespace std;

BEGIN_NAMESPACE_FRAMEWORKX

class Layer
{
public:
    //Constructor
    Layer(float zCoord);
private:
    float zCoord;
    void addEntity(const Entity& entity);
};

END_NAMESPACE_FRAMEWORKX

#endif /* defined(__FrameworkX__Layer__) */
