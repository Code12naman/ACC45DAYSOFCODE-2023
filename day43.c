#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, M; // Cost of ordering online and eating at the restaurant
        scanf("%d %d", &N, &M);

        // Calculate the cost of online order with the discount
        int discountedOnlineCost = N - (N * 10 / 100);

        // Compare the two options and find the cheaper one
        if (discountedOnlineCost < M) {
            printf("Online\n");
        } else if (discountedOnlineCost > M) {
            printf("Restaurant\n");
        } else {
            printf("Online\n"); // If both options have the same cost, Chef can choose either one
        }
    }

    return 0;
}
