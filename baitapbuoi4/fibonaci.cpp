#include<stdio.h>
int main()
{
  int n;
  printf("nhap so nguyen n :"); scanf("%d",&n);
  int s=0,s1=1,r=1;
  printf("%d ",s);
  for(int i=1;i<=n;i++)
     {
     	printf("%d ",s1);
     	s1=s1+s;
     	s=r;
     	r=s1;
     	
     }	
}

