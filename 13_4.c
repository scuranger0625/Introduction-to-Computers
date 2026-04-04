/*13_4.雙重選擇-是否直角三角形?(10.0)*/
#include <stdio.h>
int main() {
    /* 勾股定理 */
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    
    if ((a*a + b*b == c*c)||
        (b*b + c*c == a*a)||
        (a*a + c*c == b*b)) {
        printf("%d %d %d: 直角三角形",a,b,c);
    } else{
        printf("%d %d %d: 不是直角三角形",a,b,c);
    }
    
   return 0;
}
