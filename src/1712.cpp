#include <iostream>

int main()
{
	int A, B, C, s;
	std::cin >> A >> B >> C;
	
	if (B >= C)
	{
		std::cout << "-1";
		return 0;
	}
	s = A / (C - B) + 1;
	std::cout << s;
	return 0;
}
