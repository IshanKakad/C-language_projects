#include<stdio.h>
#include<math.h>
int main()
{
    float p,R,r,emi;
    int n;
    printf("enter principal amount: ");
    scanf("%f", &p);
    printf("enter annual interst rate: ");
    scanf("%f", &R);
    printf("enter time in years: ");
    scanf("%d", &n);
    r=R/(12*100);
    R = R * 12;
    emi = p*r* pow(1+r,n)/(pow(1+r,n)-1);
    printf("Your monthly EMI is : %f \n", emi);
    return 0;
}
