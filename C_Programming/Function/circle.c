#include<stdio.h>
#include<math.h>

double d(int r), c(int r), a(int r);

int main(){

    int r;
    double diametre, cir, area;

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);


    diametre = d(r);
    cir = c(r);
    area = a(r);
    printf("Diametre of the circle is: %.2lf\n", diametre);
    printf("Circumference of the circle is: %.2lf\n", cir);
    printf("Area of the circle is: %.2lf\n", area);

        return 0;

}

double d(int r){
    return (2 * r);
}

double c(int r){
    return (2 * 3.14 * r);
}
double a(int r){
    return (3.14 * pow(r, 2));
}