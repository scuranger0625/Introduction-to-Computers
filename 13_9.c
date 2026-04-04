/*13_9.雙重選擇-自主學習(5.0)*/
#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    
    if (num==5){
        printf("80分\n");
    }else if (num==7){
        printf("64分\n");
    }else if (num==18){
        printf("72分\n");
    }else {
        printf("成績不存在");
    }

   return 0;
}
