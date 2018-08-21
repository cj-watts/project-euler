#include <cstdlib>
#include <cstdio>

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
