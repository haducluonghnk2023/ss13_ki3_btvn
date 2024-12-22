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
	int n,value;
	printf("nhap so luong cac phan tu trong mang:");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n; i++){
		printf("arr[%d] :",i + 1);
		scanf("%d",&arr[i]);
	}
	selectionSort(arr,n);
	printArray(arr,n);
	printf("gia tri can tim:");
	scanf("%d",&value);
	int flag,search = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == value){
			flag = 1;
			search =  arr[i];
		}
	}
	if(flag == 1){
		printf("phan tu %d duoc tim thay tai vi tri %d",value,search);
	}else {
		printf("khong tim thay phan tu %d",value);
	}
	return 0;
}

