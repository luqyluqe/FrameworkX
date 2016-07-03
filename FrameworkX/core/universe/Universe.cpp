//
//  Universe.cpp
//  Pods
//
//  Created by JIRENTIANXIANG on 7/3/16.
//
//

#include "Universe.hpp"

BEGIN_NAMESPACE_FRAMEWORKX

void Universe::addLayer(Layer* layer)
{
    layers.push_back(layer);
}

bool Universe::removeLayer(Layer* layer)
{
    std::vector<Layer*>::iterator it=std::find(layers.begin(), layers.end(), layer);
    if (it!=layers.end()) {
        layers.erase(it);
        return true;
    }
    return false;
}

END_NAMESPACE_FRAMEWORKX
