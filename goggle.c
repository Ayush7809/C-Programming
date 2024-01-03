#include<stdio.h>
int main
{
int k = 35, z ;
k = fund (k = fund (k = fund ( k ) ) ) ;
printf ("k = %d",k);
}
fund (k)
int k;
{
k++;
return ( k ) ;
}
