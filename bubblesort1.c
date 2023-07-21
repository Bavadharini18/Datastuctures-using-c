#include <stdio.h>

int bubblesort1() {
    int size, temp;
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int size1 = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size1 - 1; i++) {
        for (int j = 0; j < size1 - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
