#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    // Calculate the minimum number of extra shoes needed
    int extra_shoes = (N > M) ? N - M : 0;

    printf("Chef must buy at least %d extra shoes to ensure he can get %d pairs of shoes.\n", extra_shoes, N);

    return 0;
}
