#ifndef _CIRCLE_H_
#define _CIRCLE_H_
#include "base.h"
class circle : public base
{
protected:
    double m_r;

public:
    circle(double r) : m_r{r} {};
    double perimeter() override;
    double square() override;
};
#endif //_CIRCLE_H_