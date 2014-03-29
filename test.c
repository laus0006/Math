#include "math_functions.h"

int
main(void)
{
	printf("gcd(%d,%d) = %d\n", A, B, gcd(A, B));
	printf("lcm(%d,%d) = %d\n", A, B, lcm(A, B));
	printf("div_num(%d) = %d\n", D, div_num(D));
	printf("div_sum(%d) = %d\n", D, div_sum(D));
	return 0;
}
