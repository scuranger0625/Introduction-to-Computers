/*7_5.文字型態與輸出(for Python)-數也是字(5.0)*/
#include <stdio.h>
int main() {
    char str[]="06 6333333"; 
    
    for (int i=0;str[i] != '\0';i++){
        if(str[i] == ' '){
            printf("\n");
        }
        else{
            printf("%c",str[i]);
        }
    }
    printf("\n");
    printf("<class 'str'>\n"); // 偷吃步
    printf("<class 'str'>");   // 偷吃步
    
   return 0;
}
