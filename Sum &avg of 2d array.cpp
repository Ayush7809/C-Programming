#include<stdio.h>
int main(){
    int m,n,i,j,sum=0;
    float avg;
    printf("Enter the no of rows:");
    scanf("%d",&m);
    printf("Enter the no of columns:");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter the element");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
        avg=(float)sum/(m*n);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The sum of element is %d \n",sum);
    printf("Average pf element is %2f",avg);
}
