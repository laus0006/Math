#include "math_functions.h"

int
gcd(int n, int p)
{
	int tmp;
	while (n != 0)
	{
		tmp = n;
		n = p % n;
		p =  tmp;
	}
	return p;
}

int
lcm(int n, int p)
{
	return n / gcd(n, p) * p;
}

int
totient(int x)
{
	if (x == 0) { return 0;}
	x = (x < 0) ? -x : x;

	int result = 1;
	for (int i = 2; i < x; ++i)
	{
		if (gcd(x, i) == 1)
		{
			++result;
		}
	}
	return result;
}

int
div_num(int x)
{
	if (x == 0) { return 0; }
	x = (x < 0) ? -x : x;

	int result = 2;
	for (int i = 2; i < x; ++i)
	{
		if (is_div(x, i))
		{
			++result;
		}
	}
	return result;
}

bool
is_prime(int x)
{
	if (x == 0) { return false; }
	for (int i = 2; i < sqrt(x); i += 2)
	{
		if (x % i)
		{
			return false;
		}
	}
	return true;
}

int
div_sum(int x)
{
	if (x == 0) { return 0; }
	x = (x < 0) ? -x : x;

	int sum = x + 1;
	for (int i = 2; i < x; ++i)
	{
		if (is_div(x, i))
		{
			sum += i;
		}
	}
	return sum;
}
