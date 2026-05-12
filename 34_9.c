/*34_9.遞迴-最大公因數(10.0)*/
#include <stdio.h>

// 遞迴求最大公因數
int gcd(int a, int b){
    // base case
    if(b==0){
        return a;
    }
    // Recursive Case
    return gcd(b,a%b);
}

int main() {
    int a,b;
    scanf("%d\n",&a,&b);
    printf("%d",gcd(a,b));

   return 0;
}
