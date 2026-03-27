/*8_9.位元運算子-位移的應用-2的次方(10.0)*/
#include <stdio.h>
int main() {
    int n ,result;
    scanf("%d",&n);
    // 核心概念： 
    // 2 的 n 次方 = 1 左移 n 位 
    // 例如： // n = 3 → 1 << 3 = 8 
    // n = 4 → 1 << 4 = 16
    result= 1<<n; // 將 1 向左移動 n 位
    printf("%d",result);

   return 0;
}
