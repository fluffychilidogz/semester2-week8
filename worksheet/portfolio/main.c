
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(1.0,3.0);
    Point p2 = makePoint(2.0,4.0);
    Point p3 = makePoint(5.0,6.0);
    Point p4 = makePoint(9.0,6.0);

    Triangle t1 = makeTriangle(p1,p2,p3);

    float area = triangleArea(t1);

    printf("Area = %f\n", area);
    
    if (pointInTriangle(p4, t1) == true)
    {
        printf("You got one!\n");
    }
    // test your code by calling the functions and printing the output 
    
    return 0;
}