#include <stdio.h>
int main(void) 
{
int integer1=0;
int integer2=0;

printf("first integer");
scanf("%d", &integer1);

printf("second integer");
scanf("%d", &integer2);

int sum=0;
sum=integer1+integer2;
printf("the sum of the two integers is %d", sum);
}