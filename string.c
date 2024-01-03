#include<stdio.h>
int main()
{
    int i,j,n,a[100],count=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the element of an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the array created is as follow");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]=a[j])
            {
                count++;
                break;
            } 
        }
    }
      printf("Total no of duplicate array %d\n",count);
}
    
