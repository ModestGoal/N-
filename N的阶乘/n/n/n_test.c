#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret= %d\n", ret);
//	return 0;
//}

int main()
{
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 4; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	
	/*for (n = 1; n <= 3; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}*/
	printf("sum= %d\n", sum);
	return 0;
}