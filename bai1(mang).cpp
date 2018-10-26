#include<stdio.h>
#include<conio.h>
void nhapmang(int A[50],int n ){
	for (int i=1;i<=n;i++){
		printf(" nhap phan tu thu A[%d] = ",i);
		scanf("%d",&A[i]);
	}
}
void xuatmang(int A[50],int n ){
	printf(" mang da nhap ");
	for (int i=1;i<=n;i++){
		printf(" %d  ",A[i]);
	
	}
}
int giaithua(int n ){
	int P=1;
	
	for (int i=1;i<=n;i++){
		P*=i;
	}
	return P;
}
void tonggiaithua(int A[50],int n ){
	int S=0;
	for (int i=1;i<=n;i++){
		S+=giaithua(A[i]);
	}
	printf(" \n tong giai thua la %d \n ",S);
}
int main(){
	int A[50];
	int n ;
	printf(" nhap n ");
	scanf("%d",&n);
	nhapmang(A,n);
	xuatmang(A,n);
	tonggiaithua(A,n);
}

