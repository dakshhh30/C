/*6.    WAP to determine if a no. is prime or not.  */		


 #include <stdio.h>

int main() {
    int num, originalNum, remainder, result;

    printf("Armstrong numbers between 1 and 500 are:\n");

    // Loop through numbers 1 to 500
    for (num = 1; num <= 500; num++) {
        originalNum = num;
        result = 0;

        // Calculate the sum of the cubes of digits
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }

        // Check if the number is an Armstrong number
        if (result == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}