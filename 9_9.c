/*9_9.循序結構隨堂測驗-13:反向輸出一個三位數(10.0)*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    
    int a=n%10;             // 個位
    int b=(n/10)%10;        // 十位
    int c=n/100;            // 百位
    
    printf("%d%d%d",a,b,c);

   return 0;
}
