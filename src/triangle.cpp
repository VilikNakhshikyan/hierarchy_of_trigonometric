#include "include/triangle.h"
#include <cmath>
#include <iostream>
triangle::triangle(double a, double b, double c) : rectangle(a, b), m_c{c}
{
    bool temp;
    if (a >= b && a >= c)
    {
        temp = (a < b + c);
    }
    else if (b >= a && b >= c)
    {
        temp = (b < a + c);
    }
    else if (c >= b && c >= b)
    {
        temp = (c < b + a);
    }
    if (!temp)
    {
        std::cout <<"A triangle with these parameters does not exist." << std::endl; 
        exit(0);
    }
}
double triangle::perimeter()
{
    return (m_a + m_b + m_c);
}

double triangle::square()
{
    double p = (m_a + m_b + m_c) / 2;
    return (sqrt(p * (p - m_a) * (p - m_b) * (p - m_c)));
}