/*比较三个数大小*/
#include<stdio.h>
int main()
{
	int a, b, c, max;
		scanf_s("%d,%d,%d", &a, &b, &c);
		max = a;
		if (a < b)max = b;
		else max = a;
		if (max < c)max = c;
		printf("the largest number is=%d\n", max);
	return 0;
}




