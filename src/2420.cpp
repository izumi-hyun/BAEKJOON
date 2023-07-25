#include <stdio.h>

int main() 
{
	long N, M;
	scanf("%ld %ld", &N, &M);
	if(N-M <0)
	{
		printf("%ld",(N-M)*-1);
	}
	else
	{
		printf("%ld",N-M);
	}
	
	return 0;
}
