/*【描述】
用递归法将一个整数n转换成字符串。例如，输入483，应输出字符串“483”。n的位数不确定，可以是任意位数的整数。*/

#include<stdio.h>
 
void convert(int n) {
	int i;
	if ((i = n / 10) != 0)
		convert(i);
	putchar(n % 10 + '0');
}
 
int main() {
	int num;
	scanf("%d", &num);
	if (num < 0) {
		printf("-");
		num = -num;
	}
	convert(num);
	printf("\n");
	return 0;
}
