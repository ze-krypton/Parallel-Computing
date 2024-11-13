#include <stdio.h>
#include <omp.h>

int main() {
    // Predefined array of 20 integers
    int numbers[20] = {153, 370, 371, 407, 123, 9474, 9475, 1, 1634, 2,
                       10, 8208, 9474, 0, 548834, 1000, 500, 6, 371, 9};

    printf("Checking Armstrong Numbers for the following predefined integers:\n");

    // Parallel block to check Armstrong numbers
    #pragma omp parallel for
    for (int i = 0; i < 20; i++) {
        int n = numbers[i];
        int arm = 0, r, c = n;

        // Calculate the Armstrong value
        while (n > 0) {
            r = n % 10; // Get the last digit
            arm += r * r * r; // Cube the last digit and add to arm
            n /= 10; // Remove the last digit
        }

        // Check if the calculated arm equals the original number
        if (c == arm) {
            printf("Thread %d: %d is an Armstrong Number\n", omp_get_thread_num(), c);
        } else {
            printf("Thread %d: %d is not an Armstrong Number\n", omp_get_thread_num(), c);
        }
    }

    return 0;
}
