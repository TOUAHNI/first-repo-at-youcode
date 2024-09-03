#include <stdio.h>

int main() {
  
  float a,b;
  float som,sos,dr,dv;
     printf("entre nombre a  ");
     scanf("%f",&a);
     printf("entre nombre b  ");
     scanf("%f",&b);
    
    som=a+b;
    printf("a+b=%.2f\n",som);
    sos=a-b;
    printf("a-b=%.2f\n",sos);
    dr=a*b;
    printf("a*b=%.2f\n",dr);
    dv=a/b;
    printf("a/b=%.2f",dv);
    

    return 0;
}


cas 2

#include <stdio.h>

int main() {
  
  int a,b;
  int som,sos,dr,dv,rest;
     printf("entre nombre a  ");
     scanf("%d",&a);
     printf("entre nombre b  ");
     scanf("%d",&b);
    
    som=a+b;
    printf("a+b=%d\n",som);
    sos=a-b;
    printf("a-b=%d\n",sos);
    dr=a*b;
    printf("a*b=%d\n",dr);
    dv=a/b;
    rest=a%b;
    printf("a/b=%d et le rest=%d",dv,rest);
    

    return 0;
}