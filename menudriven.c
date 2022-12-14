#include <stdio.h>
#include <stdlib.h>
#define firstChoice 1
#define secondChoice 2
#define thirdChoice 3
#define fourthChoice 4

/* The program allows a user to enter five numbers and then asks the user to select a choice from a menu.
The menu should offer four options. Use a switch function.
*/
main() {

int firstNumber, secondNumber, thirdNumber, sum;
int fourthNumber, fifthNumber, choice, average;


printf("Enter the first number: ");

scanf_s("%i", &firstNumber);
printf("Enter the second number: ");
scanf_s("%i", &secondNumber);
printf("Enter the third number: ");
scanf_s("%i", &thirdNumber);
printf("Enter the fourth number: ");
scanf_s("%i", &fourthNumber);
printf("Enter the last number: ");
scanf_s("%i", &fifthNumber);

printf("\nSelect the number of choice from the menu: \n");
printf("%i. Display the smallest number entered. \n", firstChoice);
printf("%i. Display the largest number entered. \n", secondChoice);
printf("%i. Display the sum of the five numbers entered. \n", thirdChoice);
printf("%i. Display the average of the five numbers entered. \n", fourthChoice);
scanf_s("%i", &choice);
sum = firstNumber + secondNumber + thirdNumber + fourthNumber + fifthNumber;
printf("%i", choice);
average = sum / 5;

switch (choice) {
case 1:
printf("The smallest number entered is: ");
break;
case 2:
printf("The largest number entered is: ");
break;
case 3:
printf("The sum of the five numbers is: %i", sum);
break;
case 4:
printf("The average of the five numbers entered is: %i", average);
break;
default:
printf("That is an invalid number. Please try again.");
}
getch();
return 0;

}
