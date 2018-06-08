
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



		// create blank arrays
void init(char english[], char piglatin[])
{
    for (int count = 0; count < 80; ++count)
        english[count] = piglatin[count] = ' ';
    return;
}


		// reads in english
void reader(char english[])
{
    int count;
    char c;
    while (( c = getchar()) != '\n')
    {
        english[count] = c;
        ++count;
    }
    return;
}


		// word counter
int wordcounter(char english[])
{
    int count, words = 1;
    for (count = 0; count < 79; ++count)
    if (english[count] == ' ' && english[count + 1] != ' ')
        ++words;
    return (words);
}


		// begins translation to pig latin
void translate(int words, char arg1[], char piglatin[])
{
	int count=0;
	int max;

    // translate
            max = strlen(arg1);

	for (int i = 0; i<max; i++)
	{
		piglatin[i] = arg1[i+1];
	}
	piglatin[max-1] = arg1[0];
	strcat(piglatin, "ay");
    return;
}


