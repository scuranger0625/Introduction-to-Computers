/*34_6.遞迴-遞迴數列(10.0)*/
#include <stdio.h>

int f(int n){
    // Base Case
    if(n==0){
        return 0;
    }
    // Recursive Case
    if (n>0){
        return n*n + f(n-1);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
   return 0;
}
