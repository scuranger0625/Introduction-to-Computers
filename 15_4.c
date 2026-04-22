/*15_4.多選一-年齡說(20.0)*/
#include <stdio.h>
int main() {
    int age;
    scanf("%d",&age);
    
    if (age<=14){
        printf("%d歲是小孩子",age);
    }else if (age>=15 && age<=29){
        printf("%d歲是志於學",age);
    }else if (age>=30 && age<=39){
        printf("%d歲是而立之年",age);
    }else if (age>=40 && age<=49){
        printf("%d歲是不惑之年",age);
    }else if (age>=50 && age<=59){
        printf("%d歲是知天命之年",age);
    }else if (age>=60 && age<=69){
        printf("%d歲是耳順之年",age);
    }else if (age>=70){
        printf("%d歲是從心所欲，不逾矩之年",age);
    }

   return 0;
}
