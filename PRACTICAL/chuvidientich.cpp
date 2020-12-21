#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("nhap canh thu nhat :");
	scanf("%d",&a);
	printf("nhap canh thu hai :");
	scanf("%d",&b);
	printf("nhap canh thu ba :");
	scanf("%d",&c);
	if(a>0&&b>0&&c>0)
	{
	  	if(a+b>c&&a+c>b&&b+c>a)
	  	{
	  	  	printf("day la 1 tam giac\n");
	  	    int p=a+b+c;
	  	    float q=float(p)/2;
	  	    printf("dien tich cua hinh tam giac la :%f",sqrt(q*(q-a)*(q-b)*(q-c)));
	  	}
		else
	    {
	  	    printf("khong tao thanh 1 tam giac");
	    } 			
	}
	else
	{
		printf("khong tao thanh 1 tam giac");
	}	
}

