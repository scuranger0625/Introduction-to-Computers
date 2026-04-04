/*11_6.單一選擇-自主學習(5.0)*/
#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a+b <= 3000){
        printf("符合預算");
    } else {
        printf("超出預算");
    }

   return 0;
}
