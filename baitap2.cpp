#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void nhapmang (int B[10],int n ){
	int i;
	for (i=0;i<n;i++){
		printf(" nhap gia tri thu [%d] = ",i);
		scanf("%d",B+i);
	}
} 
void xuatmang (int B[10],int n ){
	int i;
	printf("\n mang moi nhap ");
	for (i=0;i<n;i++){
		printf(" %d",*(B+i));
	}
}
float tbc(int B[10],int n){
	int i,p,s=0;
	for (i=0;i<n;i++){
		s+=*(B+i);
	}
	return p=s/(n-1);
}
void sapxep (int B[10], int n ){
	int i,j;
	int tam;
	for (i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			if (*(B+i)>*(B+j)){
				tam=*(B+i);
				*(B+i)=*(B+j);
				*(B+j)=tam;
			}
		}
	}
	printf(" mang sau khi sap xep ");
	for (i=0;i<n;i++)
	printf(" %d",*(B+i));
}
 
 int main (){
 	int i,B[10],n,s;
 	float p;
 	printf(" nhap n ");
 	scanf("%d",&n);
 	nhapmang(B,n);
 	xuatmang(B,n);
 	printf(" trung binh cong cac phan tu %lf",tbc(B,n));
 	sapxep(B,n);
 }
