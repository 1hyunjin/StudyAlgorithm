#include<stdio.h>
void SelectionSort(int A[], int n){
	for(int last = n; last >= 2; last--){
		int max = last;
		for(int i = 1; i <= last-1; i++){
			if(A[i] > A[max]){
				max = i;
			}
		}
		int tmp;
		tmp = A[last];
		A[last] = A[max];
		A[max] = tmp;
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

	SelectionSort(A, n);

	for( i = 1; i <= n; i++){
		printf("%d\n", A[i]);
	}
}
