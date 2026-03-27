/*8_11.位元運算子-左左右右(10.0)*/
#include <stdio.h>
int main() {
    int m,x,y;
    int result;
    scanf("%d%d%d",&m,&x,&y);
    
    // 先右移 x 位，再左移 y 位
    result=(m>>x)<<y;
    printf("%d",result);

   return 0;
}
