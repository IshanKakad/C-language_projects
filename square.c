#include<stdio.h>
int main ()
{ float side;
    printf("\n\n#FOR SQUARE#\n");
    printf("enter the side of square: ");
    scanf("%f", &side);
    printf("AREA=%f", side * side);
    printf("\nCIRCUMFERENCE=%f\n\n", 4 * side);
    return 0;
}
