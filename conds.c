/*#include <stdio.h>
int main(void) {
int grade = 50; // Example grade
puts((grade >= 50) ? "passed" : "failed");
return 0;
}*/
#include <stdio.h>
int main(void) {
    int grade = 50;
    if (grade >= 90) {
        puts("A");
    } else if (grade >= 80) {
        puts("B");
    } else if (grade >= 70) {
        puts("C");
    } else if (grade >= 60) {
        puts("D");
    } else {
        puts("F");
    }
    return 0;
}
