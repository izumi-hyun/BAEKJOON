#include <cstdio.h>

int main() 
{
	int N, so;
	int sum=0;
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &so);
		int  check=0;
		if( so > 1)
		{
			for(int j = 2; j <so; j++)
			{	
				if(so % j == 0)
				{
					check = 1;
				}
			}
			if(check == 0)
				sum += 1;
		}
		
	}
	printf("%d", sum);
	return 0;
}
