/*8_5.位元運算子-偷偷改成0(10.0)*/
#include <stdio.h>
int main() {
    int m,n;
    scanf("%d",&m);
    
    if(m>=1&&m<=4000){
        n = m& (~0<<4); // 把最後4個bit設為0
        printf("%d",n);
    }
   return 0;
}
