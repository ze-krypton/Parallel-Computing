#include <stdio.h>
#include<omp.h>

int main()
{
    int rev = 0, rem, n, temp;
    printf("enter a number : ");
    scanf("%d", &n);
    temp =n;
#pragma omp while reduction(*:rev)
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (rev == temp)
    {
        printf("%d is Palindrome", temp);
    }
    else
    {
        printf("It is not a palindrome");
    }
    return 0;
}