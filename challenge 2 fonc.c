#include <stdio.h>
int p (int a, int b){
    int s;
    s=a*b;
    return s;
}

int main() {
    int a,b;
    printf("entre a et b ");
    scanf("%d %d",&a,&b);
    printf("le produit de %d*%d=%d ",a,b,p(a,b));
    

    return 0;
}