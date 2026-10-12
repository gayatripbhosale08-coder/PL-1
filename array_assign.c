#include <stdio.h>

int main() {
    int i;
    int intArr[3];
    float floatArr[3];
    char charArr[3];

    // Integer array input
    printf("Enter 3 integer elements:\n");
    for(i = 0; i < 3; i++) {
        scanf("%d", &intArr[i]);
    }

    // Float array input
    printf("Enter 3 float elements:\n");
    for(i = 0; i < 3; i++) {
        scanf("%f", &floatArr[i]);
    }

    // Character array input (notice the space before %c to catch newline characters)
    printf("Enter 3 character elements:\n");
    for(i = 0; i < 3; i++) {
        scanf(" %c", &charArr[i]);
    }

    printf("\n--- Values and Memory Addresses ---\n");

    printf("\nInteger Array:\n");
    for(i = 0; i < 3; i++) {
        printf("Element %d -> Value: %d, Address: %p\n", i, intArr[i], (void*)&intArr[i]);
    }

    printf("\nFloat Array:\n");
    for(i = 0; i < 3; i++) {
        printf("Element %d -> Value: %.2f, Address: %p\n", i, floatArr[i], (void*)&floatArr[i]);
    }

    printf("\nCharacter Array:\n");
    for(i = 0; i < 3; i++) {
        printf("Element %d -> Value: %c, Address: %p\n", i, charArr[i], (void*)&charArr[i]);
    }

    return 0;
}
