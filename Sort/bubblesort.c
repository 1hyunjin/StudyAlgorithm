#include<stdio.h>
void bubbleSort(int A[], int n){
	int last;
	int i;
	for(last = n; last >= 2; last--){
		for(i=1; i <= last-1; i++){
			if(A[i]>A[i+1]){
				int tmp;
				tmp = A[i];
				A[i] = A[i+1];
				A[i+1] = tmp;
			}
		}
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

	bubbleSort(A, n);

	for( i = 1; i <= n; i++){
		printf("%d\n", A[i]);
	}
}
