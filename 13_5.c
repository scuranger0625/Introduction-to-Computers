/*13_5.雙重選擇-是否與6相關?(10.0)*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    
    if ((n/6 == 1)||(n%10 == 6)){
        printf("%d符合標準",n);
    }else{
        printf("%d不符合標準",n);        
    }

   return 0;
}
