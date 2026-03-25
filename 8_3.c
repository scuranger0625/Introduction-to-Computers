/*8_3.位元運算子-整數位元運算(10.0)*/
#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    
    // AND：兩個 bit 都是 1 才是 1
    printf("%d & %d=%d\n",a,b,a&b);
    // OR：其中一個是 1 就是 1
    printf("%d | %d=%d\n",a,b,a|b);
    // XOR：不同才是 1
    printf("%d ^ %d=%d\n",a,b,a^b);
    
   return 0;
}
