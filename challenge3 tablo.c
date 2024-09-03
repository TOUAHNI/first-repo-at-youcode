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
   int s = 0;
   for(i=0;i<a;i++){
       s = s + t[i];
   }
   printf("%d,",s);

    return 0;
}