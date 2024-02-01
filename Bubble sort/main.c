#include <stdio.h>

int main(void) {
    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int length = 9;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < (length - 1); j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    // Print the sorted array
    for (int i = 0; i < length; i++) {
        printf("Array[%d]: %d\n", i, a[i]);
    }

    return 0;
}

