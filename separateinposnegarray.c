#include <stdio.h>
#include <stdlib.h>

void separate(int arr[], int size);
void sort(int arr[], int size);

int main()
{
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");

    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    separate(arr, size);

    return 0;
}

void separate(int arr[], int size) {
    int i, j = 0, k = 0;
    int positive[size], negative[size];

    for (i = 0; i < size; i++) {
        if (arr[i] >= 0)
            positive[j++] = arr[i];
        else
            negative[k++] = arr[i];
    }

    sort(positive, j);
    sort(negative, k);

    printf("Positive elements in sorted order: ");
    for (i = 0; i < j; i++)
        printf("%d ", positive[i]);

    printf("\nNegative elements in sorted order: ");
    for (i = 0; i < k; i++)
        printf("%d ", negative[i]);
}

void sort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
