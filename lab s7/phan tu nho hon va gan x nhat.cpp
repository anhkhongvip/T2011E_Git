#include<stdio.h>
int main()
{
	int n,x,min;
	printf("nhap n :");scanf("%d",&n);
	int a[n];
	for(int i=1;i<=n;i++)
	{
	  printf("a[%d]= ",i);
	  scanf("%d",&a[i]);
	}
	printf("nhap x :");scanf("%d",&x);
	for(int i=1;i<=n;i++)
	{
		if(a[i]<x)
		{
		  min=x-a[i];
		  break;	
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]<x&&x-a[i]<min)
		{
			min=x-a[i];
	    }
    }
    for(int i=1;i<=n;i++)
	{
		if(x-a[i]==min)
		{
			printf("phan tu can tim la :%d",a[i]);
		}
	}	
}

