#include<stdio.h>
int main()
{
int i,add=0;

printf("Numbers betweeen 100 and 200,divisible by 3 and 5: \n");

for(i=101;i<200;i++)
{
    if(i%3,i%5==0)
    {
        printf("%5d",i);
        add+=1;
    }
}
printf("\\nThe add : %d \n",add);
}
