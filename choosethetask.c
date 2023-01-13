#include <stdio.h>

void find_factors(int num);
void separate_digits(int num);

int main() {
    int choice, num;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Find factors of a given number\n");
        printf("2. Separate digits in a given number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                find_factors(num);
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                separate_digits(num);
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Invalid choice, please enter again\n");
                break;
        }
    }
    return 0;
}

void find_factors(int num) {
    int i;
    printf("Factors of %d: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void separate_digits(int num) {
    while (num != 0) {
        int digit = num % 10;
        printf("%d ", digit);
        num /= 10;
    }
    printf("\n");
}
