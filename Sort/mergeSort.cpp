#include<stdio.h>
int A[1000001];
int tmp[1000001];
void merge(int A[], int p, int q, int r){
	int i = p;
	int j = q+1;
	int t = 1;
	//int tmp[1001];
	while(i <= q && j<= r){
		if(A[i] <= A[j]){
			tmp[t++] = A[i++];
		}
		else
			tmp[t++] = A[j++];
	}
	while(i <= q){
		tmp[t++] = A[i++];
	}
	while(j <= r){
		tmp[t++] = A[j++];
	}
	i = p; t = 1;
	while(i <= r){
		A[i++] = tmp[t++];
	}
}
void mergeSort(int A[], int p, int r){
	if(p < r){
		int q = (p+r)/2;
		mergeSort(A,p,q);
		mergeSort(A,q+1,r);
		merge(A,p,q,r);
	}
}

int main(){
	int n;
	int i;
	scanf("%d", &n);
	for( i = 1; i <= n; i++){
		
		scanf("%d", &A[i]);
	}

	mergeSort(A, 1, n);

	for( i = 1; i <= n; i++){
		
		printf("%d\n", A[i]);
	}
}
