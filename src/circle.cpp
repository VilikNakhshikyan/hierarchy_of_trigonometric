#include "include/circle.h"
#include <cmath>

double circle::perimeter()
{
    return (2 * M_PI * m_r);
}

double circle::square()
{
    return (M_PI * m_r * m_r);
}