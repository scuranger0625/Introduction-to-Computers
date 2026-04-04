/*13_3.雙重選擇-是否能構成三角形?(15.0)*/
#include <stdio.h>
int main() {
    /* 利用三角不等式 */
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    
    if ( a+b>c && b+c>a && a+c>b){
        printf("%d %d %d: 可以構成三角形",a,b,c);
    }else {
        printf("%d %d %d: 不可以構成三角形",a,b,c);
    }

   return 0;
}
