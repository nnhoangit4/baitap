#include<stdio.h>
#include<conio.h>
int main (){
	char s[] = "chaoban";
	int i=0;
	int nguyenam = 0;
	int phuam = 0;
	while (s[i++] != '\0'){
		if ( s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		nguyenam ++;
		else 
		phuam++;
	}
	printf(" '%s' co chua : %d nguyen am va %d phuam ",s,nguyenam,phuam );
}
