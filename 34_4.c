/*34_4.遞迴-費氏數列-1(10.0)*/
#include <stdio.h>

int fibonacci(int x){
    // Base Case
    if (x==1||x==2){
        return 1;
    // Recursive Case    
    }else{
        return fibonacci(x-1)+ fibonacci(x-2);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",fibonacci(n));
   return 0;
}
