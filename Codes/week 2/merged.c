#include <stdio.h>

int main() {
    int N1, N2, i, j;
    
    // Input the size of the first array
    printf("Enter the size of the first array (N1): ");
    scanf("%d", &N1);
    
    int arr1[N1];
    
    // Input elements of the first array
    printf("Enter %d elements for the first array: \n", N1);
    for (i = 0; i < N1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    // Input the size of the second array
    printf("Enter the size of the second array (N2): ");
    scanf("%d", &N2);
    
    int arr2[N2];
    
    // Input elements of the second array
    printf("Enter %d elements for the second array: \n", N2);
    for (i = 0; i < N2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int mergedArray[N1 + N2];
    
    // Copy elements of the first array into the merged array
    for (i = 0; i < N1; i++) {
        mergedArray[i] = arr1[i];
    }
    
    // Copy elements of the second array into the merged array
    for (j = 0; j < N2; j++) {
        mergedArray[N1 + j] = arr2[j];
    }
    
    // Output the merged array
    printf("The merged array is: \n");
    for (i = 0; i < N1 + N2; i++) {
        printf("%d ", mergedArray[i]);
    }
    
    printf("\n");
    return 0;
}
