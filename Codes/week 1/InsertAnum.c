#include <stdio.h>
int main()
{
    int n, i, pos, val;
    printf("Enter the size of the Array : ");
    scanf("%d", &n);
    int arr[n+1];
    printf("enter the Elements :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the Position of Element in the array : ");
    scanf("%d", &pos);

    printf("Enter the Element :");
    scanf("%d", &val);
    // main logic , to empty the area of position of element to be inserted
    if (pos < 0 || pos > n)
    {
        printf("Invalid Input!");
    }
    else
    {

        for (i = n - 1; i >= pos; i--)
        {
            arr[n + 1] = arr[n];
        }
    }
    // to insert the Element in that Area
    arr[pos] = val;

    printf("The elements are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}