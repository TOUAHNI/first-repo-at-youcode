#include <stdio.h>
int f (int n){
    int i,resulta=1;
    for (int i=n;i>1;i--) {
        resulta *= i;
    }
    return resulta;
}

int main() {
    int n;
    printf("entre nomber ");
    scanf("%d",&n);
    printf("factorielle de nombre %d!=%d ",n,f(n));
    

    return 0;
}