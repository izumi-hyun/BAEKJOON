#include <iostream>

int main()
{
	int A, B;
	std::cin >> A >> B;
	if (!(A > 0 && B < 10))
	{
		return 1;
	}
	std::cout << A - B;
	return 0;
}
