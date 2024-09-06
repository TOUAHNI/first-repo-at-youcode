#include <stdio.h>

int main() {
    
    int a,b;
  int i;
  printf("entree la talle de table  ");
  scanf("%d",&a);
  int t[a];
   
   for(i=0;i<a;i++){
   printf("entre la valeur : ");
   scanf("%d",&t[i]);
   }
   printf("entre la multiplicater  ");
   scanf("%d",&b);
   for(i=0;i<a;i++){
       printf("%d*%d=%d\n",t[i],b,t[i]*b);
   }
  
  return 0;
}