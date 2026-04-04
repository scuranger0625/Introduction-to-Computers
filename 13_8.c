/*13_8.雙重選擇-是否為迴文?(15.0)*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    
    // 第三位c固定是中間 所以不需要理會
    int a = n / 10000;
    int b = (n / 1000) % 10;
    int d = (n / 10) % 10;
    int e = n % 10;
    
    if (a == e && b ==d){
        printf("%d: 是迴文\n",n);
    }else {
        printf("%d: 不是迴文\n",n);
    }

   return 0;
}
