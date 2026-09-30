#include <stdio.h>
int main(void) {
double r1 = 0.0;
double r2 = 0.0;

printf("=== PARALLEL RESISTORS CALCULATION (VARIANT 3) ===\n");

printf("Enter resistance R1 (Ohm): ");
if (scanf("%lf", &r1) != 1 || r1 <= 0.0) {
    printf("Error: Resistance R1 must be a positive number!\n");
    return 1;
}

printf("Enter resistance R2 (Ohm): ");
if (scanf("%lf", &r2) != 1 || r2 <= 0.0) {
    printf("Error: Resistance R2 must be a positive number!\n");
    return 1;
}

double r_eq = (r1 * r2) / (r1 + r2);

printf("\nEquivalent resistance R_eq = %.2f Ohm\n", r_eq);

return 0;
}