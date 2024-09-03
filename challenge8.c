#include <stdio.h>
#include <math.h>
int main() {
  
  float a,b,c,dr,os,mo;
  
     printf("entre le nombre a ");
     scanf("%f",&a);
     printf("entre le nombre b ");
     scanf("%f",&b);
     printf("entre le nombre c ");
     scanf("%f",&c);
   
    
    dr=a*b*c;
    os=0.33;
    mo=pow(dr,os);
    printf("la Moyenne géométrique et=%.2f",mo);
    

    return 0;
}