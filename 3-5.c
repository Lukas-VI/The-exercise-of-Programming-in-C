#include<stdio.h>
#include<math.h>        //题内涉及到开根号之类运算，所以需要引入math.h头文件



//使用const定义常量，一般用全大写表示常量。定义的时候要给出数据类型。还有分号！！！
//也可以用宏定义的方法（#define PI 3.14159），但宏定义的常量一般不推荐使用，宏定义是傻瓜式替换，容易出错。

const float PI = 3.14159;
int main()
{
    float r;
    printf("Enter the radius of the ball: ");
    scanf("%f", &r);

    //计算球面积和体积
    float area = 4 * PI * pow(r, 2);
    float volume = (4/3) * PI * pow(r, 3);

    //输出结果
    printf("The area of the ball is %.2f\n", area);
    printf("The volume of the ball is %.2f\n", volume);//注意变量和占位符要对应！！！
    //                          %.2f  格式化输出浮点数，保留两位小数
    return 0;
}

