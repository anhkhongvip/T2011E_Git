#include<stdio.h>
int main()
{
 int n,s=0,max=0;
 printf("nhap so phan tu :");scanf("%d",&n);
 int a[n];
 for(int i=1;i<=n;i++)
 {
 	printf("a[%d]= ",i);
 	scanf("%d",&a[i]);
 }
 for(int i=1;i<=n;i++)
 {
 	if(a[i]>0)
 	{
 		s+=a[i];
	}
	if(a[i]<=0)
	{
		s=0;
	}
	if(s>=max)
	{
	 max=s;
	}	
 }
 printf("chuoi duong co tong lon nhat la : %d",max);
}

