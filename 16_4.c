/*16_4.多選一: switch(for C 與 C++)-運算(20.0)*/
#include <stdio.h>
int main() {
    char op;
    int a,b;
    scanf("%c",&op);
    scanf("%d %d",&a,&b);
    
    switch(op){
        case 'A':
        case 'a':{
            printf("%d+%d=%d\n",a,b,a+b);
            break;
        }
        case 'B':
        case 'b':{
            printf("%d-%d=%d\n",a,b,a-b);
            break;
        }
        case 'C':
        case 'c':{
            printf("%d*%d=%d\n",a,b,a*b);
            break;            
        }        
        case 'D':
        case 'd':{
            printf("%d/%d=%d\n", a, b, a / b);
            break;
        }
        /* 👉 因為 % 在 printf 是特殊符號👉  要印 % 必須寫 %%*/    
        default:{
            printf("%d%%%d=%d\n", a, b, a % b);
        }
    }
   return 0;
}
