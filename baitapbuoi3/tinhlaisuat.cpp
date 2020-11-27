#include<bits/stdc++.h>
using namespace std;
int main()
{
 int dem=4,tien=4000;
 float s=0;
 for(int i=1;i<=dem;i++)
    {
      s+=((4000+s)*8/100);	
    }   
 printf("so tien khi gui sau 4 nam la : %.4f",4000+s);  		
}

