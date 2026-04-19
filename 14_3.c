/*14_3.巢狀選擇-玩玩二分法(30.0)*/
#include <stdio.h>

int num;

void func1(){
    if (num>=1){
        printf("%d是正數\n",num);
    }else if (num<=0){
        printf("%d是負數\n",num);
    }
}

void func2(){
    if (num>0){
        if (num<=10000){
            printf("小於等於10000: A");
        }else{
            printf("大於10000: B");
        }
    }
    else if (num<0){
        if (num<=-10000){
            printf("小於等於-10000: C");
        } else {
            printf("大於-10000: D");
        }
    }
}

int main() {
    scanf("%d",&num);
    func1();
    func2();
    
   return 0;
}
