#include<stdio.h>
int main()
{
	int m,n;
	printf("nhap so hang va so cot ma tran : ");scanf("%d",&n);
	int a[n][n];
	printf("nhap ma tran a :\n");
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	int s1=0,s2=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
	       if(i==j)
		     {
		      s1+=a[i][j];	
			 }
		   if(j==n-i+1)
		     {
			  s2+=a[i][j];			  
			 }	 		
		}
	}
	printf("trung binh cong duong cheo chinh la : %f\n",1.0*s1/n);
	printf("trung binh cong duong cheo phu la : %f\n",1.0*s2/n);
}
