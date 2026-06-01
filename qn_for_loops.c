

#include <stdio.h>
#include <math.h>
// function main begins program execution
int main (void) {
    double principal =1000.00; // initial amount invested
    double rate = 0.05; // annual interest rate
    printf ("%4s%21f", "Year", "Amount on deposit\n");
    for (int year =1; year<=10; year++)
    {
        double amount = principal * pow(1.0 + rate, year);
        printf("%4d%21.2f\n", year, amount);
    }
}