#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

class Shape
{
  public:
    // pure virtual method
    virtual double getVolume() = 0;

    // common methods
    void setLength( double length)
    {
      this->length = length;
    }

    void setWidth(double width)
    {
      this->width = width;
    }

    void setHeight(double height)
    {
      this->height = height;
    }

  protected:
    double length;      // Length of a shape
    double width;       // Width of a shape
    double height;      // Height of a shape
};

#endif // SHAPE_H_INCLUDED
