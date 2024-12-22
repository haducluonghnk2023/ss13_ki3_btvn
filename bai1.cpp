#include<stdio.h>
void bubbleSort(int arr[], int n){
	for(int i = 0; i < n - 1; i++){
		int swap = 0;
		for(int j = 0; j < n - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swap = 1;
			}
		}
		if(swap == 0){
			break;
		}
	}
}
void printArray(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
int main(){
	int n;
	printf("nhap so luong cac phan tu trong mang:");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n; i++){
		printf("arr[%d] :",i + 1);
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr,n);
	printArray(arr,n);
	return 0;
}

