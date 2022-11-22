#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_
#include "cube.h"
class rectangle : public cube
{
protected:
    double m_b;

public:
    rectangle(double a, double b) : cube(a), m_b{b} {};
    double perimeter() override;
    double square() override;
};
#endif //_RECTANGLE_H_