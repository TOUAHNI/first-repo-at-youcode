#include <stdio.h>
int f(int n) { 
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
       b = c;
    }
    return b;
}
int main() {
   int n;
   printf("entre valor ");
   scanf("%d",&n);
   printf("%d",f(n));
    return 0;
}