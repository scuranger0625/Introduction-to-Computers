/*16_3.多選一: switch(for C 與 C++)-點食物(20.0)*/
#include <stdio.h>
int main() {
    char set;
    scanf("%c",&set);
    
    switch(set){
        case 'A':
        case 'a':{
            printf("牛奶\n");
            break;  // 印完這一組就停，不要往下亂跑
        }
    
        case 'B':
        case 'b':{
            printf("西瓜\n");
            break;
        }
        
        case 'C':
        case 'c':{
            printf("檸檬水\n");
            break;
        }
        // default = 都不符合時的備案（else）
        default:{
            printf("吐司\n");
            break;
        }
    }   // ✅ switch 結束
   return 0;
}
