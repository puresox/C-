//MSCompiler Driver By QStudio - Start
//TODO:在这里添加预编译参数

//MSCompiler Driver By QStudio - End
//查看预编译参数使用方法请点击 菜单->构建 [B]->编译帮助 [H]

#include <stdio.h>
int main(int argc, char * argv[])
{
	int num;
	printf("你好!QStudio ! 请输入一个数字!\r\n");
	scanf("%d", &num);
	printf("%d\r\n", num);
	getchar();
	return 0;
}