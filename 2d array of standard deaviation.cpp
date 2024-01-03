#include<stdio.h>
#include<math.h>
void main(){
    int m,n,i,j;
    float sum=0,avg=0,diff=0, sdsum=0;
    printf("Enter the no of row");
    scanf("%d",&m);
    printf("Enter the no of column");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter the element");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    printf("The created array is");
    for(i=0;i<m;i++){
        printf("\t");
        for(j=0;j<n;j++){
              printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The sum of all the element is %f",sum);
    avg=sum/(m*n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            diff=avg-a[i][j];
            diff=pow(diff,2);
            sdsum=sdsum+diff;
        }
    }
    sdsum=sqrt(sdsum/(m*n));
    printf("\n\n The standard deviation of all the element is %.2f\n",sdsum);
}
