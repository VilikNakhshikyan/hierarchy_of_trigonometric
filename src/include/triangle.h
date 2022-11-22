#ifndef _TRIAGLE_H_
#define _TRIAGLE_H_
#include "rectangle.h"
class triangle : public rectangle
{
protected:
    double m_c;

public:
    triangle(double, double, double);
    double perimeter() override;
    double square() override;
};
#endif //_TRIAGLE_H_