#include <stdio.h>
int min (int a, int b){
    if (a<b){
      return a;
    }else
    return b;
}

int main() {
    int a,b;
    printf("entre a et b ");
    scanf("%d %d",&a,&b);
    printf("le minimum entre deux nombres %d ",min(a,b));
    

    return 0;
}