#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],dup[50];
    int cmp;
    gets(str);
    gets(dup);
    cmp= strcmp(str,dup);
    if(cmp==0)
    {
        printf("both are equal");
    }
    else if(cmp==-1)
    printf("Both are unequal as first string is smaller than second string");
    else
    printf("both are unequal as first string is greater than second string ");
}

