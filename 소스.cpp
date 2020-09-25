#include<iostream>
#include <string>

int sum(int, int);
int sub(int, int);
int mult(int, int);
int DIV(int, int);
int mod(int, int);
int sum(double, double);
int sub(double, double);
int mult(double, double);
int DIV(double, double);
void Sum(std::string, std::string);

int main()
{
	int n;
	int a, b;
	double q, m;
	char k;
	std::string i;
	std::string j;

	std::cin >> n;
	if (n == 1)
	{
		std::cin >> a >> k >> b;
		if (k == '+')
		{
			std::cout << std::fixed;
			std::cout.precision(2);
			std::cout << sum(a, b) << std::endl;
		}
		else if (k == '-')
		{
			std::cout << std::fixed;
			std::cout.precision(2);
			std::cout << sub(a, b) << std::endl;
		}
		else if (k == '*')
		{
			std::cout << std::fixed;
			std::cout.precision(2);
			std::cout << mult(a, b) << std::endl;
		}
		else if (k == '/')
		{
			std::cout << std::fixed;
			std::cout.precision(2);
			std::cout << DIV(a, b) << std::endl;
		}
		else if (k == '%')
		{
			std::cout << std::fixed;
			std::cout.precision(2);
			std::cout << mod(a, b) << std::endl;
		}
		else
		{
			std::cout << "incorrect" << std::endl;
		}
	}
	if (n == 2)
	{
		std::cin >> q >> k >> m;
		if (k == '+')
		{
			std::cout << std::fixed;
			std::cout.precision(2);
			std::cout << sum(q, m) << std::endl;
		}
		else if (k == '-')
		{
			std::cout << std::fixed;
			std::cout.precision(2);
			std::cout << sub(q, m) << std::endl;
		}
		else if (k == '*')
		{
			std::cout << std::fixed;
			std::cout.precision(2);
			std::cout << mult(q, m) << std::endl;
		}
		else if (k == '/')
		{
			std::cout << std::fixed;
			std::cout.precision(2);
			std::cout << DIV(q, m) << std::endl;
		}
		else
		{
			std::cout << "incorrect" << std::endl;
		}

	}
	if (n == 3)
	{
		std::cin >> i >> k >> j;
		if (k == '+')
		{
			Sum(i, j);
		}
		else
		{
			std::cout << "incorrect" << std::endl;
		}
	}
}
int sum(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mult(int a, int b)
{
	return a * b;
}
int DIV(int a, int b)
{
	return a / b;
}
int mod(int a, int b)
{
	return a % b;
}
int sum(double q, double m)
{
	std::cout << std::fixed;
	std::cout.precision(2);
	return q + m;
}
int sub(double q, double m)
{
	std::cout << std::fixed;
	std::cout.precision(2);
	return q - m;
}
int mult(double q, double m)
{
	std::cout << std::fixed;
	std::cout.precision(2);
	return q * m;
}
int DIV(double q, double m)
{
	std::cout << std::fixed;
	std::cout.precision(2);
	return q / m;
}

void Sum(std::string i, std::string j)
{
	std::cout << i << j << std::endl;
}