#include <cstdio>
int main()
{
	unsigned long S, n=1,sum=0;
	scanf("%d",&S);
	while (true)
	{
		sum += n;
		if (S < sum)
		{
			printf("%d",--n);
			return 0;
		}
		++n;
	}
	return 0;
}
