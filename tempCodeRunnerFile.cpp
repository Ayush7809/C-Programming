#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],dup[50];
    int cmp;
    gets(str);
    gets(dup);
    strcat(str,dup);
    printf("\n first string is %s",str);
    printf("\n second string is %s:",str);
    printf("string after concatenate is:%s",str);
}

