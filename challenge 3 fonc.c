#include <stdio.h>
int max (int a, int b){
    if (a>b){
      return a;
    }else
    return b;
}

int main() {
    int a,b;
    printf("entre a et b ");
    scanf("%d %d",&a,&b);
    printf("le maximum entre deux nombres %d ",max(a,b));
    

    return 0;
}