#include<conio.h>
#include<stdio.h>
#include<string.h>


void  demkitu(char H[50]){
		int dem;
         	printf(" nhap chuoi ");
         gets(H);
	    dem=strlen(H);
	     printf("\n chuoi vua nhap\n ");
	
	    puts(H);
		printf(" \n chuoi co %d ki tu \n ",dem);
	   
	}
int main(){
	char H[50];
	demkitu(H);
	}
