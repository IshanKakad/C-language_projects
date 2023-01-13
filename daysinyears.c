#include <stdio.h>

int main() {
    int days, weeks, years;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;
    weeks = days / 7;
    days = days % 7;

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}
