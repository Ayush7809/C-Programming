#include<stdio.h>
int main(){
    int a[100],i,n;
    printf("Enter the no of element of array");
    scanf("%d",&n);
    printf("enter the Element of array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); 
    }
    for ( i = 0; i <n; i++){
        if(a[i]>0){
            printf("Positive\n");
        }
        else if(a[i]<0){
            printf("Negative\n");
        }
        else
        printf("Zero");
    }
}
