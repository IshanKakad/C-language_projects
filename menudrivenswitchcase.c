#include <stdio.h>

void display_pattern(int rows);
void display_combinations(int a, int b, int c);

int main() {
    int choice;
    int a, b, c, rows;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Display pattern\n");
        printf("2. Display all possible combinations of given 3 numbers\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of rows: ");
                scanf("%d", &rows);
                display_pattern(rows);
                break;
            case 2:
                printf("Enter the first number: ");
                scanf("%d", &a);
                printf("Enter the second number: ");
                scanf("%d", &b);
                printf("Enter the third number: ");
                scanf("%d", &c);
                display_combinations(a, b, c);
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

void display_pattern(int rows) {
    int i, j;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}

void display_combinations(int a, int b, int c) {
    printf("Combination 1: %d %d %d\n", a, b, c);
    printf("Combination 2: %d %d %d\n", a, c, b);
    printf("Combination 3: %d %d %d\n", b, a, c);
    printf("Combination 4: %d %d %d\n", b, c, a);
    printf("Combination 5: %d %d %d\n", c, a, b);
    printf("Combination 6: %d %d %d\n", c, b, a);
}
