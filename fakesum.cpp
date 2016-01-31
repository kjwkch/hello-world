#include <iostream>
#include <cstdlib>

int fake_sum(int a, int b)
{
	return (a > b) ? a-b : b-a;
}

int main(int argc, char** argv)
{
	int a, b;
	int result;

	if(argc < 3 || argc > 3)
	{
		std::cout << "command : FakeSum [num1] [num2]" << std::endl;
		return 1;
	}
	else if(argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
	}

	std::cout << "a : " << a << ", b : " << b << std::endl;

	result = fake_sum(a, b);
	std::cout << "result : " << result << std::endl;

	return 0;
}
