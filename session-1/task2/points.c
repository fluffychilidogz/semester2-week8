#include <stdio.h>
#include <math.h>
#include "points.h"

float distance( Point p, Point q );

int main( void ) {

    // complete the structure definition in the header file first
    // implement code for the following
    // include necessary libraries
    /*
    Point p1 = { .x=1, .y=2 };
    Point p2 = { .x=-2, .y=4 };

    
    printf(" Distance between (%.1f,%.1f) and (%.1f,%.1f) is %f\n", 
             p1.x,p1.y,p2.x,p2.y,distance(p1,p2));
    */
   struct _point span[3];
    span[1].x = 1;
    span[1].y = 2; // (1,2)
    span[0].x = -2;
    span[0].y = 4; // (-2,4)

    printf(" Distance between (%.1f,%.1f) and (%.1f,%.1f) is %f\n", 
        span[0].x,span[0].y,span[1].x,span[1].y,distance(span[0],span[1]));
    return 0;
}

float distance( Point p, Point q ) {
    // implement distance here
    long distance = sqrt(pow((q.x - p.x),2) + pow((q.y - p.y),2));
    return distance;
}