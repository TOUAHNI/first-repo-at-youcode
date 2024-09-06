#include <stdio.h>
int somme (int a, int b){
    int s;
    s=a+b;
    return s;
}

int main() {
    int a,b;
    printf("entre a et b ");
    scanf("%d %d",&a,&b);
    printf("la somme de %d+%d=%d ",a,b,somme(a,b));
    

    return 0;
}