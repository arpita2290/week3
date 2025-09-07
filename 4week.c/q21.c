#include <stdio.h>
#include <limits.h>
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) printf(" %d", arr[i]);
}
void sortArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}
int findIndex(int arr[], int n, int val) {
    for (int i = 0; i < n; i++)
        if (arr[i] == val) return i;
    return -1; // not found (should not happen here)
}
int main() {
    int arr[5] = {2, 1, 5, 3, 4}, n = 5;

    printf("Original array is->");
    printArray(arr, n);

    sortArray(arr, n);
    printf("\nSorted array is->");
    printArray(arr, n);

    int smallest = arr[0], largest = arr[n-1];
    int smallest_i = findIndex(arr, n, smallest);
    int largest_i = findIndex(arr, n, largest);

    printf("\nLargest element=%d\nLargest index=%d", largest, largest_i);
    printf("\nSmallest element=%d\nSmallest index=%d", smallest, smallest_i);

    // swap largest and smallest
    int temp = arr[largest_i];
    arr[largest_i] = arr[smallest_i];
    arr[smallest_i] = temp;

    printf("\n<------------------------------->\nModified array is->");
    printArray(arr, n);

    return 0;
}