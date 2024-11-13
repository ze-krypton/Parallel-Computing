#include <stdio.h>
#include <omp.h>
int main()
{

    int arr[20] = {1, 12, 23, 43, 23, 345, 34, 45, 345, 2, 34, 4, 2, 34, 24, 2, 478, 1293, 1244, 323};
    omp_set_num_threads(4);
#pragma omp parallel {
#pragma omp for
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] % 2 == 0)
        {

            printf("%d is an even number\n", arr[i]);
        }
        else
        {
            printf("%d is an odd number\n", arr[i]);
        }
    }
}

return 0;
}