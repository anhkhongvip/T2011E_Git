#include<stdio.h>
int main()
{
 int n,solecuoicung;
 printf("nhap so phan tu :");scanf("%d",&n);
 int a[n];
 for(int i=1;i<=n;i++)
 {
 	printf("a[%d]= ",i);
 	scanf("%d",&a[i]);
 }
 for(int i=1;i<=n;i++)
 {
 	if(a[i]%2!=0)
 	{
 		solecuoicung=a[i];
	}
 }
  printf("so le cuoi cung la : %d",solecuoicung);
}

