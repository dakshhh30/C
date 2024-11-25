#include <stdio.h>

int main() {
    float basicSalary, hra, da, totalSalary;

    // Input basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    // Calculate HRA and DA based on basic salary
    if (basicSalary < 1500) {
        hra = 0.1 * basicSalary;  // 10% of basic salary
        da = 0.9 * basicSalary;   // 90% of basic salary
    } else {
        hra = 500;                // Fixed HRA
        da = 0.98 * basicSalary;  // 98% of basic salary
    }

    // Calculate total salary
    totalSalary = basicSalary + hra + da;

    // Display the total salary
    printf("Total Salary = %f\n", totalSalary);

    return 0;
}
