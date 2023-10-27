#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X); // Input the amount 'X'

    // Check if X can be paid with denominations of 5 and 10
    if (X % 5 != 0) {
        printf("-1\n");
    } else {
        int coins_10 = X / 10; // Number of 10-rupee coins
        int coins_5 = (X % 10) / 5; // Number of 5-rupee coins

        int total_coins = coins_10 + coins_5;
        printf("%d\n", total_coins);
    }

    return 0;
}
