#include<stdio.h>
void nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
bool kiemtra(int x)
{
	if(x%2!=0)
	{
		return true;
	}
	return false;
}
int main()
{
	int n,ok=0;
	printf("nhap so phan tu trong mang : ");scanf("%d",&n);
	int a[n];
	nhapmang(a,n);
	for(int i=0;i<n;i++)
	{
	  if(kiemtra(a[i]))
	  {
	  	ok=1;
	  	printf("%d ",a[i]);
	  }	
	}
	if(ok==0)
	{
		printf("Khong co so le nao trong mang!!!");
	}
}

