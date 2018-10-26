#include<stdio.h>
#include<conio.h>
float  tinhtien(float tieuthucu,float tieuthumoi,float  tongtieuthu ){
	
	float   tien ;
	tongtieuthu=tieuthumoi-tieuthucu;
	
	if (tongtieuthu<=50&&tongtieuthu>0){
		tien=tongtieuthu*1500;
	}
	else if (tongtieuthu>50&&tongtieuthu<=100){
		tien=50*1500+((tongtieuthu-50)*2000);
	}
	else {
	
		tien=(50*1500)+(100*2000)+((tongtieuthu-150)*3000);
  }
	return tien;
}
int main (){
	float   tien;
	float  tieuthucu,tieuthumoi,tongtieuthu;
	printf(" nhap so tieu thu cu ");
	scanf("%f",&tieuthucu);
	printf(" nhap tieu thu moi ");
	scanf("%f",&tieuthumoi);
	printf(" so tien can tra %f",tinhtien(tieuthucu,tieuthumoi,tongtieuthu));
}

