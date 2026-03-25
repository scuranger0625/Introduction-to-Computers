/*5_6.算術運算子-時間計算(20.0)*/
#include <stdio.h>
int main() {
    int zongzi;
    int minute,sec,total;
    
    scanf("%d",&zongzi);
    total= zongzi*95;
    minute= total/60;
    sec=total%60;
    printf("%d\n",total);
    printf("%d個粽子共需要%d分%d秒",zongzi,minute,sec);

   return 0;
}
