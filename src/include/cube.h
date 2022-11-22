#ifndef _CUBE_H_
#define _CUBE_H_
#include "base.h"
class cube : public base
{
protected:
    double m_a;

public:
    cube(double a) : m_a{a} {};
    double perimeter() override;
    double square() override;
};
#endif //_CUBE_H_