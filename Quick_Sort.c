#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[low]; 
    int i = low + 1;
    int j = high;

    while (1) {
        while (i <= high && arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        } else {
            break;
        }
    }

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j; 
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
