#include <iostream>

int main()
{
	int A, B, V=0, C=1;
	std::cin >> A >> B;
	for (int i = 1;i<1000; i++)
	{
		for (int j = 1 ; j <= i; j++)
		{
			if(C >=A&& C<=B)
			{
				V += i;
			}
			C++;
		}
		
	}
	std::cout << V << std::endl;
	return 0;
}
