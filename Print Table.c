// WAP to print table of any no. entered by the user.


#include <stdio.h>

int main() {
    int num, i;

    // Input number from user
    printf("Enter a number to print its table: ");
    scanf("%d", &num);

    // Print multiplication table
    printf("Multiplication Table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
