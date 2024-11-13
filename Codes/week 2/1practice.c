#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Include this header for time()

int main() {
    // Seed the random number generator
    srand(time(NULL)); // Now this works correctly

    // Generate and print 10 random numbers
    for (int i = 0; i < 10; i++) {
        int randomNumber = rand(); // Generate a random number
        printf("Random Number %d: %d (Max: %d)\n", i + 1, randomNumber, RAND_MAX);
    }

    return 0;
}
