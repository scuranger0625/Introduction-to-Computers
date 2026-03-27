/*8_7.位元運算子-反相數字(10.0)*/
#include <stdio.h>
int main() {
    int m,n;
    scanf("%d",&m);
    n=m^((1<<4)-1); // 最後4個bit反相
    printf("%d",n); 
    
   return 0;
}
