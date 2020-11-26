#include<stdio.h>
int main()
{
	int a,b;
	printf("nhap vao 2 so a va b : ");
	scanf("%d%d",&a,&b);
	if(a>=b)
	  {
	  	printf("%f\n",float(a)/b);
	  }
	else
	  {
	  	printf("%d\n",a*b);
	  }  	
}

