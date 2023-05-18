#include<unistd.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

//定义进程的终止函数
void term_fun1(void)
{
	printf("first term function\n");
}

void term_fun2(void)
{
	printf("second term function\n");
}

void term_fun3(void)
{
	printf("third term function\n");
}

int main(int argc,char

