#include <stdio.h>

int fact(int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * fact(num-1);
    }
}

int main() {
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    printf("%d! = %d\n", num, fact(num));
    return 0;
}
