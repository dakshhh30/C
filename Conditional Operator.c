/*3. WAP to find the largest of 3 nos. using conditional operators.	*/


#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest number using conditional operators
    largest = (num1 > num2) ? 
                ((num1 > num3) ? num1 : num3) : 
                ((num2 > num3) ? num2 : num3);

    // Display the result
    printf("The largest number is: %d\n", largest);

    return 0;
}
