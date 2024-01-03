#include<stdio.h>
int main(){
    int a[100],i,n,k,j;
    printf("Enter the no of element of array");
    scanf("%d",&n);
    printf("enter the Element of array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); 
    }
    for ( i = 0; i <n; i++){
     if(a[i]%2==0){
         printf("Even number of array is %d \n",a[i]);
        }
     else{
         printf("odd number of array is %d \n",a[i]);
        }
    }
              
}
