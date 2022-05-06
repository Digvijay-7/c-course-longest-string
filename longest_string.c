#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	char* maxlength = "";
	// code
	for (int i = 1; i < argc; ++i)
	{
		int size = strlen(argv[i]);
		if (strlen(argv[i]) > strlen(maxlength))
		{
			maxlength = argv[i];
		}
	}
	puts(maxlength);
	return EXIT_SUCCESS;
}
