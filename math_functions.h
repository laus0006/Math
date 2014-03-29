#ifndef MATH_FUNCTIONS_HEADER
#define MATH_FUNCTIONS_HEADER

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define is_div(X,  I) \
	       X % I == 0

int gcd(int, int);
int lcm(int, int);
int totient(int);
int div_num(int);
int div_sum(int);
bool is_prime(int);

#define A 35
#define B 49
#define C 9
#define D 988

#endif
