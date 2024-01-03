#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    gets(str);
    strupr(str);
    printf("\n string after conversion of lower case letter into upper case is:%s",str);
}
