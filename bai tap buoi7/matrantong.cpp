#include<stdio.h>
int main()
{
	int m,n;
	printf("nhap so hang ma tran : ");scanf("%d",&m);
	printf("nhap so cot ma tran : ");scanf("%d",&n);
	int a[m][n],b[m][n],s[m][n];
	printf("nhap ma tran a :\n");
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	printf("nhap ma tran b :\n");
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("b[%d][%d]= ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%5d",b[i][j]);
		}
		printf("\n");
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
		  s[i][j]=a[i][j]+b[i][j];
	    }
    }
    printf("tong 2 ma tran la :\n");
    for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%5d",s[i][j]);
		}
		printf("\n");
	}
}

