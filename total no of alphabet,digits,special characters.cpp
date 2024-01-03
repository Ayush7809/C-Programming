#include<stdio.h>
#include<string.h>
 int main()
 {
     char str[500];
     int alp,dit,oth,ind;
     alp=dit=oth=ind=0;
     printf("Enter any string");
     gets(str);
     while(str[ind]!='\0')
     {
         if((str[ind]>='a'&&str[ind]<='z')||(str[ind]>='A'&&str[ind]<='Z'))
         {
             alp++;
         }
         else if(str[ind]>='0'&&str[ind]<='9')
         {            
             dit++;
         }
         else{
             oth++;
         }
         ind++;
     }
     printf("Alphabets=%d\n",alp);
     printf("Digit=%d\n",dit);
     printf("Special character=%d",oth); 
 }
