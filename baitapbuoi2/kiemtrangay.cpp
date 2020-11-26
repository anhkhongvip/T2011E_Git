#include<stdio.h>
int main()
{
 int x;
 printf("nhap vao so nguyen :");
 scanf("%d",&x);
 if(x>2&&x<7)
   {
     printf("day la thu 2-7\n");    	
   }
 else if(x==8)
   {
   	printf("day la chu nhat\n");
   }
 else
   {
   	printf("khong phai cac ngay trong tuan\n");
   }      	
}

