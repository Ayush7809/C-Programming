#include<stdio.h>
int main(){
    int a[100],i,n,sum=0;
    float avg=0;
    printf("Enter the no of element of array");
    scanf("%d",&n);
    printf("Enter the element");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("Sum of array is %d\n",sum);
  avg=(sum)/n;
  printf("Average of array is %f\n",avg);
} 
