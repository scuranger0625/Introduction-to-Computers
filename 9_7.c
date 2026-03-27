/*9_7.循序結構隨堂測驗-18:等差數列末項計算(10.0)*/
#include <stdio.h>
int main() {
    int a1,a2,n;
    scanf("%d%d%d",&a1,&a2,&n);
    // an = a1+(n-1)(a2-a1)
    int an=a1+((n-1)*(a2-a1));
    printf("%d",an);

   return 0;
}
