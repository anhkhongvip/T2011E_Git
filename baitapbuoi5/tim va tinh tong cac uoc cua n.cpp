#include<stdio.h>
int main()
{
 int n,s=0;
 scanf("%d",&n);
 printf("cac uoc cua %d la : ",n);
 	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		  	printf("%d ",i);
		  	s+=i;
		}
	}
	printf("\nTong cac uoc la :%d",s);  	
}

