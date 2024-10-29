#include<stdio.h> 

int main()
{
	int a;
	scanf("%c",&a);//%c格式化输入，读取一个字符 
	printf("ASCII :%d\n",a); //输出a的ASCII码
	printf("%c",(char)(a-32));//char让int变成Ϊchar最后输出%c
	return 0;	
}
//ASCII特性：小写字符比大写的ASCII码小32