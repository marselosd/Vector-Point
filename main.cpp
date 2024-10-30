#include <iostream>
#include "Vector.h"
#include "Point.h"

int main()
{

    Point p{ 1.0, 2.0, 3.0 };
    Vector v{ 2.0, 2.0, -3.0 };

    p.print();
    p.moveByVector(v);
    p.print();

    return 0;
}
