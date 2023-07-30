#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;  // number of elements
    int *ptr;

    ptr = (int *) calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Error: memory allocation failed\n");
        exit(1);
    }

    // use the allocated memory here
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    // print the values in the allocated memory
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // free the allocated memory
    free(ptr);
    ptr=NULL;

    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    return 0;
}
