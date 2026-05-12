/*34_8.遞迴-第n項原點數目(10.0)*/
#include <stdio.h>

int calculateDots(int n){
    // Base case
    if(n==1){
        return 1;
    }
    return calculateDots(n-1)+5; // Recursive Case
}

int main() {
    int n;
    scanf("%d",&n);
    printf("第%d項的圓點數量為%d",n,calculateDots(n));
   return 0;
}
