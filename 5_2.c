/*5_2.算術運算子-餘數(20.0)*/
#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int q=a/b;
    int r=a%b;
    printf("%d/%d=%d餘%d\n",a,b,q,r);
    printf("%d",q+r);

   return 0;
}
