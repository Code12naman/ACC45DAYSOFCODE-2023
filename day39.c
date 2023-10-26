#include <stdio.h>

int main() {
    // Define trade data for countries A, B, and C
    double exportA, importA, exportB, importB, exportC, importC;

    // Input trade data
    printf("Enter export and import data for country A:\n");
    scanf("%lf %lf", &exportA, &importA);

    printf("Enter export and import data for country B:\n");
    scanf("%lf %lf", &exportB, &importB);

    printf("Enter export and import data for country C:\n");
    scanf("%lf %lf", &exportC, &importC);

    // Calculate trade balance for each country
    double balanceA = exportA - importA;
    double balanceB = exportB - importB;
    double balanceC = exportC - importC;

    // Check if country C is in a trade surplus
    if (balanceC > 0) {
        printf("Country C is in a trade surplus.\n");
    } else if (balanceC < 0) {
        printf("Country C is in a trade deficit.\n");
    } else {
        printf("Country C is in a balanced trade.\n");
    }

    return 0;
}
