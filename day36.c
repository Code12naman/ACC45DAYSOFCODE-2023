#include <stdio.h>

int main() {
    int total_plates, plates_per_neighbor;
    
    // Input the total number of plates and plates per neighbor
    printf("Enter the total number of plates: ");
    scanf("%d", &total_plates);
    
    printf("Enter the number of plates each neighbor takes: ");
    scanf("%d", &plates_per_neighbor);
    
    // Calculate the maximum number of neighbors Chef can feed completely
    int max_neighbors = total_plates / plates_per_neighbor;
    
    printf("Chef can feed %d neighbors completely.\n", max_neighbors);
    
    return 0;
}
