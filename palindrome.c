#include<stdio.h>

int main()
{
    int num,remainder, rev=0,orig;
    printf("enter number you wana check PANILDROME for: ");
    scanf("%d", &num);
    orig = num;
    while (num>0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num = num /10;
    }
    if (orig == rev){
        printf("\n\nIts a palindrome number\n\n");
    }
    else
        printf("\n\nIts not a palindrome\n\n");
    return 0;
}
