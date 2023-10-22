#include <stdio.h>

// Function to check if it's possible to measure the weight using the given weights
int canMeasureWeight(int W, int weights[], int n) {
    if (W == 0) {
        return 1; // We can measure the weight exactly
    }
    
    if (n == 0) {
        return 0; // We have run out of weights to use
    }
    
    // Case 1: Include the current weight in the measurement
    int include = 0;
    if (W >= weights[n - 1]) {
        include = canMeasureWeight(W - weights[n - 1], weights, n - 1);
    }
    
    // Case 2: Exclude the current weight from the measurement
    int exclude = canMeasureWeight(W, weights, n - 1);
    
    // Return YES if either of the cases is successful
    return include || exclude;
}

int main() {
    int W, X, Y, Z;
    int weights[] = {W, X, Y, Z};
    int n = 4; // Number of available weights

    printf("Enter the weight of the object (W): ");
    scanf("%d", &W);
    printf("Enter the weights of X, Y, and Z respectively: ");
    scanf("%d %d %d", &X, &Y, &Z);

    // Check if it's possible to measure the weight
    if (canMeasureWeight(W, weights, n)) {
        printf("YES, it is possible to measure the weight of the object.\n");
    } else {
        printf("NO, it is not possible to measure the weight of the object.\n");
    }

    return 0;
}
