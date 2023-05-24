#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void reverseByZero(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == 0) {
            reverseArray(arr, 0, i - 1);
        }
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseByZero(arr, n);

    
    printArray(arr, n);

    return 0;
}
