#include<iostream>

/*long int fibonacci_sequence(unsigned long long number)
{
	unsigned long long previous_number = 0;
	unsigned long long next_number = 1;
	unsigned long long temp_number = 0;
	if (number == 1)
	{
		std::cout << "Числа Фибоначчи: " << current_number;
	}
	else if (quantity_of_numbers >= 2)
	{
		std::cout << "Числа Фибоначчи: " << current_number << " " << next_number << " ";
	}
	else
		std::cout << "Числа Фибоначчи: ";
	for (int counter = 0; counter < number - 2; counter++)
	{
		temp_number = previous_number;
		previous_number = next_number;
		next_number = previous_number + temp_number;
		number = next_number;
		return fibonacci_sequence(number);
	}
}*/

int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned long long current_number = 0;
	unsigned long long next_number = 1;
	unsigned long long temp_number = 0;
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
	if (quantity_of_numbers == 1)
	{
		std::cout << "Числа Фибоначчи: " << current_number;
	}
	else if (quantity_of_numbers >= 2)
	{
		std::cout << "Числа Фибоначчи: " << current_number << " " << next_number << " ";
	}
	else
		std::cout << "Числа Фибоначчи: ";
	for (int counter = 0; counter < quantity_of_numbers - 2; counter++)
	{
		temp_number = current_number;
		current_number = next_number;
		next_number = current_number + temp_number;
		std::cout << next_number << " ";
		//std::cout<< fibonacci_sequence(counter);
	}
	return 0;
}