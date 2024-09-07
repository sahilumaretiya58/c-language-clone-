#include <stdio.h>

int main() {
    // Declare variables
    float baseSalary;
    float hraPercent, daPercent, taPercent;
    float hra, da, ta;
    float grossSalary;

    //  salary and percentages for HRA, DA, and TA
    printf("Enter Base Salary: ");
    scanf("%f", &baseSalary);

    printf("Enter HRA percentage: ");
    scanf("%f", &hraPercent);

    printf("Enter DA percentage: ");
    scanf("%f", &daPercent);

    printf("Enter TA percentage: ");
    scanf("%f", &taPercent);

    // Calculate HRA, DA, and TA
    hra = (hraPercent / 100) * baseSalary;
    da = (daPercent / 100) * baseSalary;
    ta = (taPercent / 100) * baseSalary;

    // Calculate Gross Salary
    grossSalary = baseSalary + hra + da + ta;

    // Output Gross Salary
    printf("Gross Salary: Rs. %.2f\n", grossSalary);
    
}