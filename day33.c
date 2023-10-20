#include <stdio.h>

int main() {
    double X, Y;
    
    // Input initial positions of the policeman and thief
    printf("Enter the initial position of the policeman: ");
    scanf("%lf", &X);
    printf("Enter the initial position of the thief: ");
    scanf("%lf", &Y);

    // Calculate the minimum time to catch the thief
    double time = (Y - X) / (2.0 - 1.0);  // Speed difference is 2 - 1 = 1

    // Output the result
    if (time < 0) {
        printf("The thief has already passed the policeman.\n");
    } else {
        printf("The policeman will catch the thief in %.2lf seconds.\n", time);
    }

    return 0;
}
