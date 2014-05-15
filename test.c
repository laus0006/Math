#include <stdio.h>
#include "math_functions.h"
int gcdTest(int a, int b, int expResult){
	int result = gcd(a,b);
	printf("Testing gcd with %d and %d ", a, b);
	fflush(stdout);
	if (result != expResult){
		printf("FAILED: %d %d became %d instead of %d\n",a,b,result,expResult);
		return -1;
	}
	printf("PASSED\n");
	return 0;
}

int is_prime_test(int a, int expResult){
	bool result = is_prime(a);
		printf("Testing is_prime with %d ", a);
	fflush(stdout);
	if (result != expResult){
		printf("FAILED: %d is_prime: %d instead of %d\n",a,result,expResult);
		return -1;
	}
	printf("PASSED\n");
	return 0;
	
}


int test_gcds(){
	int e = 0;
	//test loop condition n!=0
	printf("Testing loop condition n!=0\n");
	e|=gcdTest(-1,0,-1); 
	e|=gcdTest(1,0,1); 
	e|=gcdTest(0,10,10);
	e|=gcdTest(-1,1,1); 
	e|=gcdTest(1,1,1); 
	e|=gcdTest(1,1,1); 
	//test loop condition n==0
	printf("Testing loop condition n==0\n");
	e|=gcdTest(0,-1,1); 
	e|=gcdTest(0,0,0); 
	e|=gcdTest(0,1,1); 
	e|=gcdTest(0,2,2); 
	e|=gcdTest(0,-2,-2); 
	return e;
}
int test_is_primes(){
	int e = 0;
	e|=is_prime_test(0,0);
	e|=is_prime_test(-1,0);
	e|=is_prime_test(1,1);
	e|=is_prime_test(5,1);
	return e;
}

int
main(void)
{
	//printf("gcd(%d,%d) = %d\n", A, B, gcd(A, B));
	//printf("lcm(%d,%d) = %d\n", A, B, lcm(A, B));
	//printf("div_num(%d) = %d\n", D, div_num(D));
	//printf("div_sum(%d) = %d\n", D, div_sum(D));
	int e = 0;
	e|=test_gcds();
	e|=test_is_primes();
	return 0;
}
