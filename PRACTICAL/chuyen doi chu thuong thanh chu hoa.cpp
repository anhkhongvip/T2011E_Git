#include<stdio.h>
#include<string.h>
void upperCase(char s[])
{
	for(int i=0;i<strlen(s);i++){
      if(s[i]>=97&&s[i]<=122)
         s[i]=s[i]-32;
   }
}
int main(){
   char str[25];
   printf("Enter string: ");
   gets(str);
   upperCase(str);
   printf("Upper Case: %s",str);
}
