#include <iostream>
#include <math.h>
int main()
{
	int M, N;
	std::cin >> M;
	std::cin >> N;

	for (int first = M; first <= N; first++)
	{
		if (first == 1)
		{
			continue;
		}
		bool cham = true;
		for (int second = 2; second <= (int)sqrt(first); second++)
		{
			if (first % second == 0)
			{
				cham = false;
				break;
			}
		}
		if (cham == true)
		{
			printf("%d\n", first);
		}
	}
	return 0;
}
