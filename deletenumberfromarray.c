#include <stdio.h>

void delete_number(int arr[], int size, int num);

int main() {
    int size, num, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");

    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number to delete: ");
    scanf("%d", &num);

    delete_number(arr, size, num);

    return 0;
}

void delete_number(int arr[], int size, int num) {
    int i, flag = 0;

    for (i = 0; i < size; i++) {
        if (arr[i] == num) {
            int j;
            for (j = i; j < size - 1; j++)
                arr[j] = arr[j + 1];
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf("The new array after deleting %d is: ", num);
        for (i = 0; i < size - 1; i++)
            printf("%d ", arr[i]);
    } else {
        printf("%d not found in the array", num);
    }
}
