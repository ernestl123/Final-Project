
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <pigg.h>
int main(int argc, char* argv[])
{
    char arg1[80], piglatin[80];
    int words;
	sscanf(argv[1], "%s", &arg1);
	if (argv[2] != NULL)
	{
		printf("Please only enter one word.\n");
		return 1;
	}
	else
	{
		translate(words, arg1, piglatin);
		printf ("%s\n", piglatin);
	}
}










