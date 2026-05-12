/*34_1.遞迴-1加到10的和(10.0)*/
#include <stdio.h>

// 定義遞迴函式，計算從1到x的總和
int resursivesum(int x){
    if(x==1){
        return 1; // 基底條件：當x等於1時，總和為1
    }else{
        return x + resursivesum(x-1);  // 遞迴呼叫
    }
}

int main() {
    int n = 10;
    printf("%d\n",resursivesum(n));
   return 0;
}
