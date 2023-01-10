#include <stdio.h>

void swap(int a, int b) {
  int t = a;
  a = b;
  b = t;

return (&a,&b);
}

int mult(int a, int b) {
  return a * b;
}

int main()
 {
   int a,b,c;

   printf("Enter the value of a:");
   scanf("%d",&a);

   printf("Enter the value of b:");
   scanf("%d",&b);

   swap(&a,&b);
  printf("%d %d\n", a, b);

  int result = mult(a, b);
  printf("The swapped numbers are: %d %d \n", a,b);
  printf("\nThe  multiplied output is : %d\n", result);

  return 0;
}
