#include <stdio.h>

int main(void) {

printf("Enter two integers, and I will tell you\n");

printf("the relationships they satisfy: ");
int number1 = 0; 
int number2 = 0; 
scanf("%d %d", &number1, &number2);

if (number1 == number2) {
printf("%d is equal to %d\n", number1, number2);
}
if (number1 != number2) {
printf("%d is not equal to %d\n", number1, number2);
}
if (number1 < number2) {
printf("%d is less than %d\n", number1, number2);
}
if (number1 > number2) {
printf("%d is greater than %d\n", number1, number2);
}
if (number1 <= number2) {
printf("%d is less than or equal to %d\n", number1, number2);
}
if (number1 >= number2) {
printf("%d is greater than or equal to %d\n", number1, number2);
}   

}
