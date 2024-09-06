#include <stdio.h>
int n(int a){
    if(a%2==0){
    return 1;
}else 
  return 0;
}
int main() {
    int a;
    printf("entre nomber ");
    scanf("%d",&a);
    printf("%d",n(a));

    return 0;
}