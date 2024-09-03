#include <stdio.h>
#include <math.h>
int main() {
  
  int v,r,r3;
  printf("entree le rayon r ");
  scanf("%d",&r);
  r3=pow(r,3);
  v=1.33*3.14*r3;
  printf("Volume= %d",v);
   return 0;
}