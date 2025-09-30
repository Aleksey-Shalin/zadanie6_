#include<iostream>

int fibonacci_sequence(int number)
{
	if (number > 1)
	{
		return fibonacci_sequence(number - 2) + fibonacci_sequence(number - 1);
	}
	else return number;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int quantity_of_numbers = 0;
	while (true)
	{
		std::cout << "Введите количество чисел Фибоначчи: ";
		std::cin >> quantity_of_numbers;
		if (quantity_of_numbers <= 0)
		{
			std::cout << "Просьба ввести корректное количество чисел" << std::endl;
		}
		else break;
	}
	std::cout << "Числа Фибоначчи: ";
	for (int a = 0; a < quantity_of_numbers; a++)
	{
		std::cout << fibonacci_sequence(a) << " ";
	}
	return 0;
}