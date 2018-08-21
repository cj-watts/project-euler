#include <cstdlib>
#include <cstdio>

/*
* Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
*
* 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
*
* By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*
*/

/*
* Decided to use recursion and use a pointer for fun 
*/

void Fibonacci(unsigned int t1, unsigned int t2, unsigned int *totalPtr){
	unsigned int next = t1 + t2;
	if(next % 2 == 0) *totalPtr += next;
	if (next < 4000000)
		Fibonacci(t2, next, totalPtr);
}

int main(int argc, char const *argv[])
{
	unsigned int total=2;
	Fibonacci(1,2,&total);
	printf("Total is: %u\n", total );
	return 0;
}