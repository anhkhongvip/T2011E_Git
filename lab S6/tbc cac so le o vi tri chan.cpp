#include<stdio.h>
int main()
{
	 int n,dem=0;
	 printf("nhap so phan tu :");scanf("%d",&n);
	 int a[n];
	 float s=0;
	 for(int i=1;i<=n;i++)
	 {
	 	printf("a[%d]= ",i);
	 	scanf("%d",&a[i]);
	 }
	 for(int i=1;i<=n;i++)
	 {
	 	if(i%2==0&&a[i]%2!=0)
	 	{
	 		s+=a[i];
	 		dem++;
		}
	 }
	 if(dem==0)
	 {
	 	printf("khong co trung binh cong");
	 }
	 else
	 {
	    printf("trung binh cong se la : %f",s/dem);
	 }
}

