#include<stdio.h>|
 int UCLN(int a,int b){
     while (b!=0){
     	int r=a%b;
              a=b;
			  b=r;}
		return a;}	     	
int main(){
	int a,b,bcnn;
	do{
		printf("nhap 2 so a va b :");
		scanf("%d%d",&a,&b);
		if(a<=0||b<=0)
		{
		 printf("Ban nhap so khong hop le moi ban nhap lai!!!\n");	
		}
	}
	while(a<=0||b<=0);
	bcnn=a*b/UCLN(a,b);
	printf("UCLN la %d va BCNN la %d",UCLN(a,b),bcnn);
}


