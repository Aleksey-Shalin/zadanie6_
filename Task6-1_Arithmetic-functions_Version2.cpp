#include<iostream>
int sum(int a, int b)
{
	return a + b;
}

int diff(int a, int b)
{
	return a - b;
}

int multiplication(int a, int b)
{
	return a * b;
}

double division(double a, double b)
{
	return a / b;
}

int main(int arg, char** argv)
{
	int a = 5;
	int b = 10;
	
	//int s = sum(a, b);
	//int dif = diff(a, b);
	//int mult = multiplication(a, b);
	//double div = static_cast<double>(division(a, b));

	std::cout << a << " + " << b << " = " << sum(a, b) << std::endl;
	std::cout << a << " - " << b << " = " << diff(a, b) << std::endl;
	std::cout << a << " * " << b << " = " << multiplication(a, b) << std::endl;
	std::cout << a << " / " << b << " = " << static_cast<double>(division(a, b)) << std::endl;

	return 0;
}

