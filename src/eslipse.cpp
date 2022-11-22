#include "include/ellipse.h"
#include <cmath>
double elipse::perimeter()
{
    if (m_r > m_R)
    {
        m_r += m_R;
        m_R = m_r - m_R;
        m_r-=m_R;
    }
    //The error of this formula is ~0.63%.
    return ((4 * M_PI * m_R * m_r + pow(m_R - m_r, 2)) / (m_R + m_r));
}

double elipse::square()
{
    return (M_PI * m_R * m_r);
}