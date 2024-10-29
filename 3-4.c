#include <stdio.h>
#include<math.h>

int main() 
{   
    //二次方程式 ax^2 + bx + c = 0 的求根·
    float a, b, c;
    
    //因为二次方程的根的实部和虚部都可能有，所以要判断一下方程是否有解，如果方程有解，则求出两个根，否则输出无解。
    //判断方程是否有解的条件是：b^2-4ac>0
    
    do{//在输入之前不知道条件是否成立，所以用do-while循环，先入为主
        printf("Enter three numbers: ");
        scanf("%f %f %f", &a, &b, &c);
    }while(b*b-4*a*c<0);       //把条件不满足需求的条件放在括号里这样就可以一直重复输入 until 条件满足


    //求根
    float x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
    float x2 = (-b - sqrt(b*b-4*a*c))/(2*a); 
    
    //输出结果
    if (x1 == x2){      //甚至可以判断一下两个根是否相等，如果相等，则只输出一个根
        printf("The only root is %.2f", x1);

    }else{
        printf("The roots are %.2f and %.2f", x1, x2);
    }
    return 0;
}
