#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    gets(str);
    strrev(str);
    printf("\n the reversing of string is:%s",str);
}
