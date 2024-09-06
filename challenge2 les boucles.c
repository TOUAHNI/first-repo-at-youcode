#include <stdio.h>

int main() {
    int a,s;
  int i;
  printf("entree un nombre;   ");
  scanf("%d",&a);
  s =1;
   
   for(i=a;i>1;i--){
       s=s*i;
   }
   printf("%d",s);
   
    
    return 0;
}