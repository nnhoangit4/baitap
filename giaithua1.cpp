#include<stdio.h>
#include<conio.h>
int hoang(int n)
{
	int hoang =1;
	int i ;
	for (i=2; i<=n; i++)
	{
		hoang*=i;
		}
		return hoang;
		}
		int main()
 {
 printf("3! = %d \n ",hoang(3));
 return 0;
 }	
