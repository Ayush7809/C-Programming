#include<stdio.h>
int main(){
  int n,i,a[100],l=0;
  printf("Enter the no of element of array");
  scanf("%d",&n);
  printf("Enter the element of array");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    if(l<a[i])
      l=a[i];
    }
    printf("largest no of array %d",l);
}


