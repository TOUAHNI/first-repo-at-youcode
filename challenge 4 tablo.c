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
   int min = t[0];
   for(i=1;i<a;i++){
      if(min>t[i])
         min=t[i];
   }printf("min = %d\n",min);
   int max = t[0];
   for(i=1;i<a;i++){
      if(max<t[i])
         max=t[i];}
   printf("max = %d\n",max);
   
    return 0;
}