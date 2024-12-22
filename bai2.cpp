#include<stdio.h>
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void selectionSort(int arr[], int n){
	for( int i = 0; i < n - 1; i++){
		int min_index = i;
		for(int j = i + 1; j < n; j++){
			if(arr[j] <arr[min_index]){
				min_index = j;
			}
		}
		swap(&arr[min_index],&arr[i]);
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
	selectionSort(arr,n);
	printArray(arr,n);
	return 0;
}

