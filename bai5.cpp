#include <stdio.h>

void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void bubbleSort(int arr[], int n) {
  int i, j;
  int swapped;
  int count = 0; 

  for (i = 0; i < n - 1; i++) {
    swapped = 0;
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
        swapped = 1;
        ++count;
      }
      
    }
    if (swapped == 0) {
      break;
    }
  }
  printf("So lan lap la %d\n",count);
}

int main() {
  int arr[] = {64,34,25,12,22,11,90};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Mang ban dau: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  bubbleSort(arr, n);

  printf("Mang da sap xep: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
