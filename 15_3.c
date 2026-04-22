/*15_3.多選一-象限(20.0)*/
#include <stdio.h>
int main() {
    float x,y; // 象限座標
    scanf("%f %f",&x,&y);
    
    if (x > 0 && y > 0){
        printf("第一象限");
    }else if (x < 0 && y > 0){
        printf("第二象限");
    }else if (x < 0 && y < 0){
        printf("第三象限");
    }else if (x > 0 && y < 0){
        printf("第四象限");
    }else if (x == 0 && y != 0){
        printf("y軸");
    }else if (y == 0 && x !=0){
        printf("x軸");
    }else if (x==0 && y==0){
        printf("原點");
    }
    
   return 0;
}
