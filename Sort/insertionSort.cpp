#include<stdio.h>
void insertionSort(int A[], int n){
	for(int i=2; i<= n; i++ ){
		int loc = i-1;
		int newItem = A[i];
		while(loc >= 1 && newItem < A[loc]){
			A[loc + 1] = A[loc];
			loc = loc-1;
		}
		A[loc+1] = newItem;
	}
}
int main(){
	int n;
	int A[1001];
	int i;
	scanf("%d", &n);
	for( i = 1; i <= n; i++){
		scanf("%d", &A[i]);
	}

	insertionSort(A, n);

	for( i = 1; i <= n; i++){
		printf("%d\n", A[i]);
	}
}
