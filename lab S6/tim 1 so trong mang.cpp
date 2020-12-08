#include<stdio.h>
int main()
{
	 int n,
	 bool ok=false;
	 printf("nhap so phan tu :");scanf("%d",&n);
	 int a[n];
	 int x;
	 for(int i=1;i<=n;i++)
	 {
	 	printf("a[%d]= ",i);
	 	scanf("%d",&a[i]);
	 }
	 printf("nhap so phan tu x :");scanf("%d",&x);
	 for(int i=1;i<=n;i++)
	 {
	 	if(a[i]==x)
	 	{
	 	  ok=true;
		  printf("Da tim thay so %d trong mang !!",x);	
		  break;
		}
     }
     if(ok==false)
     {
     	printf("khong tim thay !!");
	 }
     
}

