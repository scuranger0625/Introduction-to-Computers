/*34_10.遞迴-3N+1 找出循環數列(5.0)*/
#include <stdio.h>

// 遞迴印出 Collatz 數列
void collatz(int n){
    printf("%d ", n);     // 印出目前數字
    // Base Case
    if(n==1){
        return;
    }
    // =========================
    // Recursive Case
    // =========================
    
    // 奇數
    if (n%2==1){
        collatz(3 * n + 1);
    // 偶數
    }else{
        collatz(n / 2);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    // 重複輸入直到 n <= 0
    while(n>0){
        collatz(n);
        printf("\n");
        scanf("%d", &n);        
    }

   return 0;
}
