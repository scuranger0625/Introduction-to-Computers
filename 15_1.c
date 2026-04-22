/*15_1.多選一-分數等第(20.0)*/
#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if(x>100 || x<0){
        printf("error data");
    } else if(x>=90){
        printf("Your score is %d and degree is A!\n",x);
    }else if(x>=80){
        printf("Your score is %d and degree is B!\n",x);
    }else if(x>=70){
        printf("Your score is %d and degree is C!\n",x);
    }else if(x>=60){
        printf("Your score is %d and degree is D!\n",x);
    }else {
        printf("Your score is %d and degree is F!\n",x);
    }

   return 0;
}
