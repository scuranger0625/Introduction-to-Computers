/*16_2.多選一: switch(for C 與 C++)-點套餐(20.0)*/
#include <stdio.h>
int main() {
    char set;
    scanf("%c",&set);
    /* switch 是「往下流」當 match 到某個 case 之後：
    會一路往下執行，直到結束（或遇到 break）*/
    switch(set){
        case'A':printf("牛奶\n");
        case'B':printf("西瓜\n");
        case'C':printf("檸檬水\n");
        default:printf("吐司\n");
    }
    
   return 0;
}
