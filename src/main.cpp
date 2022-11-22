#include <iostream>
#include <iomanip>
#include <cmath>
#include "include/cube.h"
#include "include/rectangle.h"
#include "include/triangle.h"
#include "include/circle.h"
#include "include/ellipse.h"

int main()
{
    const int size = 5;
    base *figures[size];
    figures[0] = new cube(5);
    figures[1] = new rectangle(5, 6);
    figures[2] = new triangle(5, 6, 7);
    figures[3] = new circle(5);
    figures[4] = new elipse(5, 6);
    for (auto &i : figures)
    {
        std::cout << "R = " << std::setw(7) << i->perimeter() << "   S = " << std::setw(7) << i->square() << std::endl;
    }
}