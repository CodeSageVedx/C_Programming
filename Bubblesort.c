#include <stdio.h>

void bubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[7] = {1, 16, 48, 71, 52, 31, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}
