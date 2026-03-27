/*8_6.位元運算子-偷偷改成1(10.0)*/
#include <stdio.h>
int main() {
    int m,n;
    scanf("%d",&m);
    if(m>=1&&m<=4000){
        n=m|((1<<4)-1); // 把最後4個bit設為1
        printf("%d",n);
    }
   return 0;
}
