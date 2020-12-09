#include<stdio.h>
int main()
{
	bool ok;
	int n;
	printf("nhap n :");scanf("%d",&n);
	int a[n];
	for(int i=1;i<=n;i++)
	{
		do
		{
		  ok=true;
		  printf("a[%d]= ",i);
	      scanf("%d",&a[i]);  	
		  for(int j=1;j<i;j++)
		  {
		  	if(a[i]==a[j])
		  	{
		  	 ok=false;
		  	 printf("%d da co trong mang roi!!!!\n",a[i]);
			 printf("Moi ban nhap lai :\n");  	
			}
		  }	
		}
		while(ok==false);	
	}
	for(int i=1;i<=n;i++)
	{
		 printf("%d ",a[i]);
    }
}

