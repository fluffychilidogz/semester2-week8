
#include <stdio.h>
#include "shapes.h"

int main( void ) {

    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    struct _point Points;
    Points.x = 10;
    Points.y = 20;

    Rectangle Rec1 = makeRectangle(Points, 10, 10);
    Rectangle Rec2 = makeRectangle(Points, 5, 5);
    
    printf("Rectangle 2's point is (%f,%f), length = %f, & height = %f\n", Rec2.p.x, Rec2.p.y, Rec2.l, Rec2.w);
    scaleRectangle(&Rec2, 2);
    printf("Rectangle 2's NEW point is (%f,%f), length = %f, & height = %f\n", Rec2.p.x, Rec2.p.y, Rec2.l, Rec2.w);


    return 0;
}

Rectangle makeRectangle( Point p, float width, float height ){
    Rectangle r;

    r.p = p;
    r.w = width;
    r.l = height;

    return r;
}

float area( Rectangle r ) {
    float a = r.l * r.w;

    return a;
}

void shiftRectangle( Rectangle *r, Point dp ) {
    r->p.x = r->p.x + dp.x;
    r->p.y = r->p.y + dp.y;


    return;
}

void scaleRectangle( Rectangle *r, float scale ) {
    r->l = r->l * scale;
    r->w = r->w * scale;


    return;
}
