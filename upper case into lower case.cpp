#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    gets(str);
    strlwr(str);
    printf("/n string after conversion of upper case letter int lower case letter :%s",str);
}
