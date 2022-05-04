#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	// variable declaratins
	int size = 0;
	int temp = 1;
	int longest = 0;
	int j = 0;
	// code
	for (int i = 1; i < argc; ++i)
	{
		size = strlen(argv[i]);
		if (longest < size)
		{
			longest = size;
			temp = i;
			j = 1;
		}
	}
	switch (j)
	{
	case 1:
		puts(argv[temp]);
		break;
	default:
		printf("\n");
		break;
	}
	return EXIT_SUCCESS;
}
