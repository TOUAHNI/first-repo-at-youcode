#include <stdio.h>

int main() {
    int a;
  int i;
  printf("entree la talle de table  ");
  scanf("%d",&a);
  int t[a];
   
   for(i=0;i<a;i++){
   printf("entre la valeur : ");
   scanf("%d",&t[i]);
       
   }
   for(i=0;i<a;i++){
       printf("%d,",t[i]);
   }

    return 0;
}