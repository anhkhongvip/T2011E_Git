#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c;
 do
  {
  	printf("moi nhap do dai 3 canh :");
  	scanf("%d%d%d",&a,&b,&c);
  
	if(a+b>c&&a+c>b&&b+c>a)
	{
		int p=a+b+c;
		printf("chu vi hinh tam giac la :%d\n",p);
		p=float(p)/2;
		printf("dien tich hinh tam giac la :%f",sqrt(p*(p-a)*(p-b)*(p-c)));
	}	
	else
  	  {
  	  	printf("ban nhap khong dung moi nhap lai\n");
  	  }		
  }
 while(!(a+b>c&&a+c>b&&b+c>a&&a>0&&b>0&&c>0)); 		
}

