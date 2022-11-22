#ifndef _ELIPSE_H_
#define _ELIPSE_H_
#include "circle.h"
class elipse : public circle
{
protected:
    double m_R;

public:
    elipse(double r, double R) : circle(r), m_R{R} {};
    double perimeter() override;
    double square() override;
};
#endif //_ELIPSE_H_