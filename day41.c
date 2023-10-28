#include <stdio.h>

int main() {
    int N;  // Number of days until Halloween
    char startDay;  // The starting day (e.g., 'M' for Monday)

    printf("Enter the number of days until Halloween: ");
    scanf("%d", &N);

    printf("Enter the starting day (M for Monday, T for Tuesday, W for Wednesday, etc.): ");
    scanf(" %c", &startDay);

    // Calculate the number of times Dracula can indulge in his favorite menu
    int daysUntilTuesday = 0;

    switch (startDay) {
        case 'M':
            daysUntilTuesday = 1;
            break;
        case 'T':
            daysUntilTuesday = 0;
            break;
        case 'W':
            daysUntilTuesday = 6;
            break;
        case 'R':
            daysUntilTuesday = 5;
            break;
        case 'F':
            daysUntilTuesday = 4;
            break;
        case 'S':
            daysUntilTuesday = 3;
            break;
        case 'U':
            daysUntilTuesday = 2;
            break;
        default:
            printf("Invalid starting day. Please enter a valid day (M, T, W, R, F, S, U).\n");
            return 1;
    }

    int timesToIndulge = N / 7;
    int remainingDays = N % 7;

    if (remainingDays >= daysUntilTuesday) {
        timesToIndulge++;
    }

    printf("Dracula can indulge in his favorite menu %d times in the next %d days before Halloween.\n", timesToIndulge, N);

    return 0;
}
