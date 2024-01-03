#include<stdio.h>
#include<string.h>
int main()
    {
        char str[500];
        int ind,len,vowel,con;
        vowel=con=0;
        printf("Enter any string");
        gets(str);
        len=strlen(str);
        for(ind=0;ind<len;ind++)
        {
            if((str[ind]>='a'&&str[ind]<='z')||(str[ind]>='A'&&str[ind]<='Z'))
            {
                if(str[ind]=='a'||str[ind]=='e'||str[ind]=='i'||str[ind]=='o'||str[ind]=='u'||str[ind]=='A'||str[ind]=='E'||str[ind]=='I'||str[ind]=='O'||str[ind]=='U')
                vowel++;
            
             else{
                con++;
            }
        }
        printf("Total no of vowel=%d\n",vowel);
        printf("Total no of consonant=%d",con);
    }
}

