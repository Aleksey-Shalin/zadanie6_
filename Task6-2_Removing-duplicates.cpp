#include<iostream>

int power_of_number(int value, int power)
{
	int result = 1;
	for (int i = 0; i < power; i++)
	{
		result *= value;
	}
	std::cout << value << " в степени " << power << " = " << result << std::endl;
	return result;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	power_of_number(5, 2);
	power_of_number(3, 3);
	power_of_number(4, 4);
}
