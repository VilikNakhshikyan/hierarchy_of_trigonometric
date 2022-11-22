#include "include/rectangle.h"

double rectangle::perimeter()
{
    return (2 * (m_a + m_b));
}

double rectangle::square()
{
    return (m_a * m_b);
}