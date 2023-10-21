
#include <stdio.h>

int main() {
    int X, Y, A, B;
    printf("Enter the initial amount of hot water (X): ");
    scanf("%d", &X);
    printf("Enter the initial amount of cold water (Y): ");
    scanf("%d", &Y);
    printf("Enter the initial temperature (A): ");
    scanf("%d", &A);
    printf("Enter the desired temperature (B): ");
    scanf("%d", &B);

    int diff = B - A;

    if (diff > 0 && diff <= X) {
        printf("Chef can achieve the desired temperature.\n");
    } else if (diff < 0 && -diff <= Y) {
        printf("Chef can achieve the desired temperature.\n");
    } else if (diff == 0) {
        printf("Chef's initial temperature is already the desired temperature.\n");
    } else {
        printf("Chef cannot achieve the desired temperature.\n");
    }

    return 0;
}
