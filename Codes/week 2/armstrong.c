#include <stdio.h>
int main()
{
    int arr[20] = {153, 334, 321, 21323, 4545, 3423, 2454, 53423, 3245, 423, 234234, 5454, 423423, 45345, 5342, 2343, 54342, 3244, 43452};
        int rem, arm = 0, n;
    for (int i = 0; i < 20; i++)
    {
        n=arr[i] ;
        while (n > 0)
        {

            rem = n % 10;
            arm = arm + rem * rem * rem;
            n /= 10;
        }

        if (arm == arr[i])
        {
            printf("%d is an Armstrong number\n", arr[i]);
        }
        else
        {
            printf("%d is NOT an armstrong number\n", arr[i]);
        }
    }
}