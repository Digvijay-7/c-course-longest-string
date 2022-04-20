#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	
	//printf("This program has %d command line arguments:\n",argc);
	int size = 0;
	int temp = 1;
	int longest = 0;
	for (int i = 1; i < argc; ++i)
	{
		size = strlen(argv[i]);
		if (longest < size)
		{
			longest = size;
			temp = i;
		}
	}
	if(argv[temp]!=NULL)
	printf("\n%s\n", argv[temp]);

	return (0);
}