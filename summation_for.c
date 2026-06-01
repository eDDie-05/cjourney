#include <stdio.h>
// function main begins program execution
int main (void) {
    int sum = 0; // initialize sum
    for (int number = 2; number <= 100; number+=2) {
        sum += number; // add number to sum
    }
    printf("Sum is %d\n", sum); // display the result
}