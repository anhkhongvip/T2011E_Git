#include<stdio.h>
int main()
{
	int ngay,thang,s=0;
	printf("nhap ngay va thang :");
	scanf("%d%d",&ngay,&thang);
	if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12)
	  {
	  	if(ngay>=1&&ngay<=31)
	  	{
	  	 if(thang==1)
		   {
		   	 s+=ngay;
		   	 printf("hom nay la ngay thu %d trong nam\n",s);
		   	 if(s%7+1==1)
		   	   {
		   	    printf("hom nay la chu nhat");
		   	   }
			   else
			      {	
	  	          printf("hom nay la thu %d\n",s%7+1);
	  	          }
		   }
		else if(thang==3)
		   {
		   	s+=31+28+ngay;
		   	printf("hom nay la ngay thu %d trong nam\n",s);
		   	 if(s%7+1==1)
		   	   {
		   	    printf("hom nay la chu nhat");
		   	   }
			   else
			      {	
	  	          printf("hom nay la thu %d\n",s%7+1);
	  	          }
		   }
		else if(thang==5)
		   {
		   	s+=31*2+30+28+ngay;
		   	printf("hom nay la ngay thu %d trong nam\n",s);
		   	 if(s%7+1==1)
		   	   {
		   	    printf("hom nay la chu nhat");
		   	   }
			   else
			      {	
	  	          printf("hom nay la thu %d\n",s%7+1);
	  	          }
		   }
		else if(thang==7)
		   {
		   	s+=31*3+30*2+28+ngay;
		   	printf("hom nay la ngay thu %d trong nam\n",s);
		   	 if(s%7+1==1)
		   	   {
		   	    printf("hom nay la chu nhat");
		   	   }
			   else
			      {	
	  	          printf("hom nay la thu %d\n",s%7+1);
	  	          }
		   }
		else if(thang==8)
		   {
		   	s+=31*4+30*2+28+ngay;
		   	printf("hom nay la ngay thu %d trong nam\n",s);
		   	 if(s%7+1==1)
		   	   {
		   	    printf("hom nay la chu nhat");
		   	   }
			   else
			      {	
	  	          printf("hom nay la thu %d\n",s%7+1);
	  	          }
		   }
		else if(thang==10)
		   {
		   	s+=31*5+28+30*3+ngay;
		   	printf("hom nay la ngay thu %d trong nam\n",s);
		   	 if(s%7+1==1)
		   	   {
		   	    printf("hom nay la chu nhat");
		   	   }
			   else
			      {	
	  	          printf("hom nay la thu %d\n",s%7+1);
	  	          }
		   }
		else if(thang==12)
		   {
		   	s+=31*6+28+30*4+ngay;
		   	printf("hom nay la ngay thu %d trong nam\n",s);
		   	 if(s%7+1==1)
		   	   {
		   	    printf("hom nay la chu nhat");
		   	   }
			   else
			      {	
	  	          printf("hom nay la thu %d\n",s%7+1);
	  	          }
		   }  	     	     	     	     	     	
	  	}
	  	else
	  	{
	  		printf("ban da nhap ngay ko hop le!!\n");
	  	}	
	  }
	else if(thang==2)
	  {
	  	if(ngay>=1&&ngay<=28)
	  	{
	  	s+=31+ngay;
	  	printf("hom nay la ngay thu %d trong nam\n",s);
		   	 if(s%7+1==1)
		   	   {
		   	    printf("hom nay la chu nhat");
		   	   }
			   else
			      {	
	  	          printf("hom nay la thu %d\n",s%7+1);
	  	          }
	  	}
	  	else
	  	{
	  		printf("ban da nhap ngay ko hop le!!\n");
	  	}	
	  }
	else if(thang==4||thang==6||thang==9||thang==11)
	  {
	  	if(ngay>=1&&ngay<=30)
	  	{
	  	 if(thang==4)
		   {
		   	 s+=31*2+28+ngay;
		   	 printf("hom nay la ngay thu %d trong nam\n",s);
		   	 if(s%7+1==1)
		   	   {
		   	    printf("hom nay la chu nhat");
		   	   }
			   else
			      {	
	  	          printf("hom nay la thu %d\n",s%7+1);
	  	          }
		   }
		 else if(thang==6) 
		   {
		   	 s+=31*3+30+28+ngay;
		   	 printf("hom nay la ngay thu %d trong nam\n",s);
		   	 if(s%7+1==1)
		   	   {
		   	    printf("hom nay la chu nhat");
		   	   }
			   else
			      {	
	  	          printf("hom nay la thu %d\n",s%7+1);
	  	          }
		   }
		 else if(thang==9) 
		   {
		   	 s+=31*5+30*2+28+ngay;
		   	 printf("hom nay la ngay thu %d trong nam\n",s);
		   	 if(s%7+1==1)
		   	   {
		   	    printf("hom nay la chu nhat");
		   	   }
			   else
			      {	
	  	          printf("hom nay la thu %d\n",s%7+1);
	  	          }
		   }
		 else if(thang==11) 
		   {
		   	 s+=31*6+30*3+28+ngay;
		   	 printf("hom nay la ngay thu %d trong nam\n",s);
		   	 if(s%7+1==1)
		   	   {
		   	    printf("hom nay la chu nhat");
		   	   }
			   else
			      {	
	  	          printf("hom nay la thu %d\n",s%7+1);
	  	          }
		   }            
	  	}
	  	else
	  	{
	  		printf("ban da nhap ngay ko hop le!!\n");
	  	}	
	  }
	else
	{
		printf("ban da nhap thang khong hop le!!\n");
	}      	
}

