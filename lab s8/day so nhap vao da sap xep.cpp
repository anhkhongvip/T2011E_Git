#include<stdio.h>
int main()
{
	int n,dem=0;
	printf("nhap so phan tu :");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		dem++;
		for(int i=0;i<dem-1;i++)
		{
			for(int j=i+1;j<dem;j++)
			{
				if(a[i]>a[j])
				{
					int t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		for(int i=0;i<dem;i++)
	    {
	    	printf("%d ",a[i]);	
        }
        	printf("\n");
	}
}

