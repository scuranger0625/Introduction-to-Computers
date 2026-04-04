/*13_1.雙重選擇-及格與否(15.0)*/
#include <stdio.h>
int main() {
    int score;
    scanf("%d",&score);
    
    if (score >= 60){
        printf("%d分及格\n",score);
    } else {
        printf("%d分不及格\n",score);        
    }

   return 0;
}
