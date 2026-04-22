/*16_5.多選一: switch(for C 與 C++)-運算列表(20.0)*/
#include <stdio.h>
int main() {
    char op;
    int a,b;
    scanf("%c",&op);
    scanf("%d %d",&a,&b);
    
    switch(op){
        case 'A':
        case 'a': {
            printf("%d+%d=%d\n", a, b, a+b);
        }
        case 'B':
        case 'b': {
            printf("%d-%d=%d\n", a, b, a-b);
        }        
        case 'C':
        case 'c': {
            printf("%d*%d=%d\n", a, b, a*b);
        }        
        case 'D':
        case 'd': {
            printf("%d/%d=%d\n", a, b, a/b);
        }
        default:{
            printf("%d\n", a % b);
        }
        
    }

   return 0;
}
