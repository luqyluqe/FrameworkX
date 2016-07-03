//
//  Universe.hpp
//  Pods
//
//  Created by JIRENTIANXIANG on 7/3/16.
//
//

#ifndef Universe_hpp
#define Universe_hpp

#include "Layer.h"

BEGIN_NAMESPACE_FRAMEWORKX

class Universe
{
public:
    void addLayer(Layer* layer);
    bool removeLayer(Layer* layer);
private:
    vector<Layer*> layers;
};

END_NAMESPACE_FRAMEWORKX

#endif /* Universe_hpp */
