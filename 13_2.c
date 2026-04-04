/*13_2.雙重選擇-奇數還是偶數?(15.0)*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    
    if ( n%2 == 0){
        printf("%d: 偶數\n",n);
    }else {
        printf("%d: 奇數\n",n);
    }

   return 0;
}
