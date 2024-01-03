#include<stdio.h>
#include<math.h>
int main(){
    int i,n,a[100];
    float sum=0,avg=0,diff,sdsum=0;
    printf("Enter the no of element of array:");
    scanf("%d",&n);
    printf("Enter the element of array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        sum=sum+a[i];
       
    }
    avg=sum/n;
    printf("%f\n%f",sum,avg);
    for(i=0;i<n;i++){
        diff=(avg-a[i]);
        sdsum+=pow(diff,2);
    }
    sdsum=sqrt(sdsum/n);
    printf("Standard deivation of an array is %2f\n",sdsum);
}
