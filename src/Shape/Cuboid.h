#ifndef CUBOID_H_INCLUDED
#define CUBOID_H_INCLUDED

#include "Shape.h"

class Cuboid
  : public Shape
{
  public:
    // pure virtual function
    double getVolume();

};

#endif // CUBOID_H_INCLUDED
