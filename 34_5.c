/*34_5.遞迴-費氏數列-2(10.0)*/
#include <stdio.h>

int fibonacci(int x){
    // Base Case
    if(x==0){
        return 0;
    }
    if (x==1){
        return 1;

    }
    // Recursive Case  
    // Early Return 風格
    return fibonacci(x-1)+fibonacci(x-2);
    
}

int main() {
    int n;
    scanf("%d",&n);
    printf("0 ");
    for(int i=1;i<=n;i++){
        printf("%d ",fibonacci(i));
    }
   return 0;
}
