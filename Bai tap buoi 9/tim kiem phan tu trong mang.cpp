#include<stdio.h>
void nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
void bubblesort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
			}
		}
	}
}
int Search(int a[],int l,int r,int x)
{
	if(r>=l)
	{
		int mid=l+(r-l)/2;
		if(a[mid]==x)
		{
			return mid;
		}
		if(a[mid]>x)
		{
			return Search(a,l,mid-1,x);
		}
		if(a[mid]<x)
		{
			return Search(a,mid+1,r,x);
		}	
	}
	return -1;
}
int main()
{
 int n,x;
 printf("nhap so phan tu trong mang : ");scanf("%d",&n);
 int a[n];
 nhapmang(a,n);
 bubblesort(a,n);
 xuatmang(a,n);
 printf("nhap so x can tim kiem : ");scanf("%d",&x);
 if(Search(a,1,n,x)==-1)
 {
 	printf("Khong tim thay %d trong mang",x);
 }
 else
 {
 	printf("Da tim thay %d trong mang",x);
 }
}

