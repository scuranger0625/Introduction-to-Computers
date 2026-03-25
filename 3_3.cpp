/*3_3.變數與指定運算子-指定浮點數(20.0)*/
#include <iostream>
#include<iomanip> // 輸入輸出操縱
using namespace std;

int main() {
    float num1,num2;
    num1=10.100001;
    num2=5.200002;
    // fixed會配合setprecison(6) 顯示至小數點第6位
    cout<<fixed<<setprecision(6)<<num2<<endl;
    cout<<fixed<<setprecision(6)<<num1<<endl;
    
   return 0;
}
