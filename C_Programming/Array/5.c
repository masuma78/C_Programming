// ID 1282, 1250
#include <stdio.h>
int main() {
   
    int Number_A, Number_B, Number_C, Number_D;

    // Input the quantities of each chocolate type
    printf("Enter the Number of KitKat (A): ");
    scanf("%d", &Number_A);

    printf("Enter the Number of Cadbury (B): ");
    scanf("%d", &Number_B);

    printf("Enter the Number of Candy (C): ");
    scanf("%d", &Number_C);

    printf("Enter the Number of Snickers (D): ");
    scanf("%d", &Number_D);

    // Display the counts
    printf("\nNumber of chocolates:\n");
    printf("KitKat (A): %d\n", Number_A);
    printf("Cadbury (B): %d\n", Number_B);
    printf("Candy (C): %d\n", Number_C);
    printf("Snickers (D): %d\n", Number_D);

    // Calculate total number of chocolates
    int total_chocolates = Number_A + Number_B + Number_C + Number_D;
    printf("\nTotal number of chocolates: %d\n", total_chocolates);

    return 0;
}
