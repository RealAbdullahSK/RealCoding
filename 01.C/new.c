#include <stdio.h>
#include <math.h>
float SquareArea(float side);
float CircleArea(float radius);
float RectangleArea(float length, float breadth, float height);

int main()
{
    float s = 4,r=2,l=2,b=3,h=4;
    SquareArea(s);
    CircleArea(r);
    RectangleArea(l,b,h);


    return 0;
}

float SquareArea(float side)
{
    side = pow(side, 2);
    printf("Area of square is : %f\n", side);
}

float CircleArea(float radius)
{
    float t;
    t = 3.14 * pow(radius, 2);
    printf("Area of Circle is : %f\n", t);
}

float RectangleArea(float length, float breadth, float height)
{
    float t;
    t = length * breadth * height;
    printf("Area of Rectangle is : %f\n", t);
}