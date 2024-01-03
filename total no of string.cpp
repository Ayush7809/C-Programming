#include<stdio.h>
#include<string.h>
int main()
{
    char str[500];
    int ind=0,words=1;
    printf("Enter any string");
    gets(str);
      while(str[ind]!='\0')
      {
          if(str[ind]==' '||str[ind]=='\n'||str[ind]=='\t')
          {
              words++;
          }
          ind++;
      }
      printf("Total no of words=%d",words);
}


