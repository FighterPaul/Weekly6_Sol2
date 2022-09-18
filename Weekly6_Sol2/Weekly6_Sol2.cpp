#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int sum = 1;						//Problem 45, Solution 2, ID Student 65010902
int factorial(int num)
{
	if (num == 0)
	
		return 1;
	
	return  num * (factorial(num - 1));

}
int main()
{
	int num;
	scanf("%d", &num);
	if (num >= 0);
		printf("%d", factorial(num));
	return 0;
}