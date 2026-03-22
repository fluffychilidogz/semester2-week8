
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) 
{
    Point new;
    // implementation
    new.x = x;
    new.y = y;
    return new;
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()

Line makeLine( Point p1, Point p2 )
{
    Line newl;
    newl.p[0] = p1;
    newl.p[1] = p2;
    return newl;
}

Triangle makeTriangle( Point p1, Point p2, Point p3 )
{
    Triangle newt;
    newt.p[0] = p1;
    newt.p[1] = p2;
    newt.p[2] = p3;
    return newt;
}

float lineLength( Line l )
{
    // Calculates the length of a line
    // calculation -> square root((x2 - x1)^2 + (y2 - y1)^2)
    return fabsf(sqrt(pow(l.p[1].x - l.p[0].x,2) + pow(l.p[1].y - l.p[0].y,2)));
}

float triangleArea( Triangle t )
{
    // Calculates the area of a triangle
    // calculation -> 1/2 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) || 1/2 * base * height
    return fabsf((t.p[0].x * (t.p[1].y - t.p[2].y) + t.p[1].x * (t.p[2].y - t.p[0].y)
             + t.p[2].x * (t.p[0].y - t.p[1].y)) / 2);
}

bool samePoint( Point p1, Point p2 )
{
    Line line_a = makeLine(p1,p2);
    float size = lineLength(line_a);
    if (size < 1.0e-6)
    {
        return true;
    }
    return false;
}

bool pointInLine( Point p, Line l)
{
    if (samePoint(p,l.p[0]) == true || samePoint(p,l.p[1]) == true)
    {
        return true;
    }
    return false;
}

bool pointInTriangle( Point p, Triangle t )
{
    if (samePoint(p,t.p[0]) == true || samePoint(p,t.p[1]) == true || samePoint(p,t.p[2]) == true)
    {
        return true;
    }
    return false;
}