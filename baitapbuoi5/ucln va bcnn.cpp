#include<stdio.h>	     	
int main(){
	int a,b,bcnn,k,z;
	do
	{
		printf("nhap so a :");	
		scanf("%d",&a);
		printf("nhap so b :");
		scanf("%d",&b);
	}
	while(!(a!=0&&b!=0));
	k=b;
	z=a;
	while (b!=0)
	{
     	int r=a%b;
        a=b;
		b=r;
	}
	bcnn=(z*k)/a;
	printf("UCLN la %d va BCNN la %d",a,bcnn);
}

