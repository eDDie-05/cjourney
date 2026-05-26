#include <stdio.h>
int main(void) {
int total = 0; // initialize total of grades to 0
int counter = 1;
while (counter <= 10) { // loop 10 times
// prompt for input
printf("%s", "Enter grade: ");
int grade = 0; // grade value
scanf("%d", &grade); // read grade from user
total = total + grade; // add grade to total
counter = counter + 1; // increment counter
} // end while
// termination phase
int average = total / 10; // integer division
// display result
printf("Class average is %d\n", average);
} // end function main