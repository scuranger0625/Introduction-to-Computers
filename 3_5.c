/*3_5.變數與指定運算子-=不是等號(20.0)*/
#include <stdio.h>
int main() {
    int a=55;
    int b=555;
    
    a=b;
    b=a;
    printf("%d %d",a,b);

   return 0;
}
