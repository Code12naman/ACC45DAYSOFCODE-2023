#include <stdio.h>

int main() {
    int X, Y;
    printf("Enter the total movie duration (X): ");
    scanf("%d", &X);
    printf("Enter the duration Chef watches at double speed (Y): ");
    scanf("%d", &Y);

    if (Y % 2 != 0) {
        printf("Y must be even.\n");
        return 1;
    }

    // Calculate the total time Chef spends watching the movie
    float totalTime = (Y / 2.0) + (X - Y);

    printf("Chef will spend %.2f minutes watching the movie in total.\n", totalTime);

    return 0;
}
