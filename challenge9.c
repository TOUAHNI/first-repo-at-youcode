#include <stdio.h>
#include <math.h>
int main() {
  
  float x1,x2,y1,y2,z1,z2,sos1,sos2,sos3,som,t;
  
     printf("entre x1 ");
     scanf("%f",&x1);
     printf("entre y1 ");
     scanf("%f",&y1);
     printf("entre z1 ");
     scanf("%f",&z1);
     
    printf("entre x2 ");
     scanf("%f",&x2);
     printf("entre y2 ");
     scanf("%f",&y2);
     printf("entre z1 ");
     scanf("%f",&z2);
   
    
    sos1=pow((x2-x1),2);
    sos2=pow((y2-y1),2);
    sos3=pow((z2-z1),2);
    som=sos1+sos2+sos3;
    t=sqrt(som);
    
   
    printf(" la distance entre deux points donnés dans un espace 3D. et=%.2f",t);
    

    return 0;
}