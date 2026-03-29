/*10_3.循序結構競賽挑戰-UVa913(10.0)*/
#include <stdio.h>

int main() {
    long long n;      // 有「平方 / 乘法 / 10^9」 → 用 long long 
    scanf("%lld",&n); // %lld = long long 的格式符號
    // 前面用了幾個數
    long long used = ((n - 1) / 2) * ((n - 1) / 2);
    // last 是第幾個奇數
    long long k = used+n;
    // 最後一個數
    long long last= (2*k)-1;
    // 最後三個數的和
    long long ans = last +(last-2)+(last-4);
    
    printf("%lld",ans);
    
   return 0;
}
