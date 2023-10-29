#include <stdio.h>

int main() {
    int P, Q;
    printf("Enter the score for Alice (P): ");
    scanf("%d", &P);
    printf("Enter the score for Bob (Q): ");
    scanf("%d", &Q);

    int total_serves = P + Q;
    
    if (total_serves % 4 < 2) {
        // If the total number of serves is 0, 1, or 2, it's Alice's serve.
        printf("It's Alice's serve.\n");
    } else {
        // Otherwise, it's Bob's serve.
        printf("It's Bob's serve.\n");
    }

    return 0;
}
