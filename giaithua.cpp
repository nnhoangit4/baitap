#include<stdio.h>
#include<conio.h>
int gt (int n){
	int gt=1;
	for ( int i=2 ; i<= n ;i++){
		gt*=i;
		}
		return gt ;
		}
		int main ()
		{
			int n ;
			
			printf(" nhap vao n ");
			scanf("%d",&n);
			printf(" giai thua là ",gt(n));
			
			}
			

