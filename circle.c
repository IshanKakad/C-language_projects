// Program to find area and circumference of various Geometric shapes
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main() {
                                                            //for circle
    float radius;
    float pi=3.14;
    printf("#FOR CIRCLE#\n");
    printf("Enter Radius:");
    scanf("%f", &radius);
    printf("AREA=%f", radius * radius * pi);
    printf("\nCIRCUMFERENCE: %f", 2 * pi * radius);
