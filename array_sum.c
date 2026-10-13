#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n]; // Variable-length array for dynamic sizing
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to the sum as we scan it
    }
    
    printf("The sum of all elements in the array is: %d\n", sum);
    
    return 0;
}
