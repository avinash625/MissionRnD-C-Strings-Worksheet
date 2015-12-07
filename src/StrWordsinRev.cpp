/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void reverse(char *input, int first, int last)
{
	char buffer;

	for (; first<last; first++, last--)
	{
		buffer = input[first];
		input[first] = input[last];
		input[last] = buffer;
	}
}
void str_words_in_rev(char *input, int len){

	int first = 0;
	char buffer;
	int i, j, k = 0;
	for (i = 0; input[i]; i++);
	i--;
	for (; k <= i / 2; k++)
	{
		buffer = input[i - k];
		input[i - k] = input[k];
		input[k] = buffer;
	}
	first = 0;
	for (i = 0; input[i] != '\0'; i++)
	{
		if (input[i] == ' '){
			reverse(input, first, i - 1);
			first = i + 1;
		}
	}
	reverse(input, first, i - 1);
}
