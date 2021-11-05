// some testing options when test framework is too heavy
#include <stdio.h>
#include <assert.h>

void LargerOf(int* a, int* b)
{
	if (*a > *b)
		*b = *a;
	else
		*a = *b;
}

int main(void)
{
	//using test framework - see my youtube video

	//using assert
	int test01_a = 5, test01_b = 4;
	LargerOf(&test01_a, &test01_b);
	//test01_a = 11;  //just to test the test
	assert(test01_a == test01_b);

	//hardcoded
	printf("test 1: ");
	int test02_a = 12, test02_b = 36;
	LargerOf(&test02_a, &test02_b);
	test02_a = 22;  //just to test the test
	if (test02_a != test02_b || test02_a != 36)
		printf("test failed\n");
	else
		printf(" passed\n");

	printf("test 2: ");
	test02_a = 0.1 ;
	test02_b = -5;
	LargerOf(&test02_a, &test02_b);
	if (test02_a != test02_b || test02_a != 0.1)
		printf("test failed\n");
	else
		printf(" passed\n");

}