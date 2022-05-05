#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	// variable declaratins	
	int temp = 1;	
	int longest = 0;
	// code
	if (argc == 1)
	{
		puts("");
	}
	for (int i = 1; i < argc; ++i)
	{
		int size = strlen(argv[i]);
		if (longest < size)
		{
			longest = size;
			temp = i;
		}
	}
	puts(argv[temp]);
	return EXIT_SUCCESS;
}
