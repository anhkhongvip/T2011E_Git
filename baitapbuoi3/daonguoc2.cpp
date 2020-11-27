#include<stdio.h>
int main()
{
  int n,x=0;
  printf("Nhap n=");
  scanf("%d",&n);
  do{
  x=x*10+n%10;
  n/=10;
  }
  while(n!=0);
  
//  if(n!=0)
//    {
//    	x=x*10+n%10;
//    	n/=10;
//    }
//  if(n!=0)
//    {
//    	x=x*10+n%10;
//    	n/=10;
//    }	
//  if(n!=0)
//    {
//    	x=x*10+n%10;
//    	n/=10;
//    }
//  if(n!=0)
//    {
//    	x=x*10+n%10;
//    	n/=10;
//    }
	printf("Dao nguoc : %d",x);						
}

