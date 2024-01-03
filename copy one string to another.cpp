#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],dup[50];
    gets(str);
    strcpy(dup,str);
    printf("\n the string after copy is %s",dup);
}
