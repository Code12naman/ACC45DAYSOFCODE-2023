#include <stdio.h>

int main() {
    int S, X, Y, Z;
    
    // Input the total storage, memory occupied by the first two apps, and memory requirement of the third app.
    printf("Enter total storage (S MB): ");
    scanf("%d", &S);
    printf("Enter memory occupied by the first app (X MB): ");
    scanf("%d", &X);
    printf("Enter memory occupied by the second app (Y MB): ");
    scanf("%d", &Y);
    printf("Enter memory requirement of the third app (Z MB): ");
    scanf("%d", &Z);
    
    // Calculate the total memory occupied by the first two apps.
    int occupiedMemory = X + Y;
    
    // Calculate the remaining memory available after deleting apps, if necessary.
    int remainingMemory = S - occupiedMemory;
    
    // Determine the minimum number of apps Chef has to delete.
    int appsToDelete = 0;
    
    if (remainingMemory < Z) {
        // Chef needs to delete apps to make space for the third app.
        while (remainingMemory + X + Y < Z) {
            if (X > Y) {
                X = 0;
            } else {
                Y = 0;
            }
            appsToDelete++;
        }
    }
    
    printf("Minimum number of apps to delete: %d\n", appsToDelete);
    
    return 0;
}
