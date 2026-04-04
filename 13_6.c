/*13_6.雙重選擇-拆數字(10.0)*/
#include <stdio.h>
int main() {
    int n;
    int a,b,c;
    scanf("%d",&n);
    
    c = n%10;          // 個位
    b = (n/10)%10;     // 十位
    a = n/100;         // 百位

    printf("%d%d%d\n", c, b, a);

   return 0;
}
