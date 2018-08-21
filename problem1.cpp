#include <cstdlib>
#include <cstdio>
/*
* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
* Find the sum of all the multiples of 3 or 5 below 1000.
*/
using namespace std;
int main(int argc, char const *argv[])
{
	unsigned int total=0;
	unsigned int temp;
	printf("Starting 3's\n");
	for (int i = 1; i < 1000; ++i)
	{
		temp = i * 3;
		if(temp>=1000) break;
		
		total += temp;
	}
	printf("Starting 5's\n");
	for (int i = 1; i < 1000; ++i)
	{
		
		temp = i * 5;
		if(temp>=1000) break;
		if(temp%3 !=0){
			total += temp;
			
		}
	}
	printf("%u\n", total);
	return 0;
}
