/*Write a program using a function to calculate the area of a circle, triangle, or cylinder.*/

// area of circle = 3.14 * r * r;
// area of triangle = 1/2 * b * h;
// area of cylinder = 2 * 3.14 * r * h + 2 * 3.14 * r * r ;

#include <stdio.h>
#include <math.h>

double cir(int r), tri(int b, int h), cyl(int r, int h);

int main(){

    int r, b, h;
double circleArea, triangleArea, cylinderArea;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    printf("Enter the base of the triangle : ");
    scanf("%d", &b);
    printf("Enter the height of the triangle or cylinder : ");
    scanf("%d", &h);

    circleArea = cir(r);
    triangleArea = tri(b, h);
    cylinderArea = cyl(r, h);

    printf("The area of the circle is %.2lf\n", circleArea);
    printf("The area of the triangle is %.2lf\n", triangleArea);
    printf("The area of the cylinder is %.2lf\n", cylinderArea);

    return 0;


}

double cir(int r){
    return (3.14 * r * r);
}
double tri(int b, int h){
    return (0.5 * b * h);
}

double cyl(int r, int h){
    return (2 * 3.14 * r * h + 2 * 3.14 * r * r) ;
}