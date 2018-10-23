#include<stdio.h>

#include<conio.h>
main ()
{
	int tong = 0;
	int n;
	
	printf(" nhap n ");
	scanf("%d",&n);
	for (int dem=1 ;dem<=n;dem++){
	   tong+=dem;
	}
       
       printf(" tong la %d ",tong);

}

