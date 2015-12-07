/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {
	
	char *p=str, *q=str;
	int  i, j;
	if (str == '\0' || K < 0)
		return '\0';
	for (i = 0; i <= K; i++)
	{
		if (str[i] == '\0')
			return '\0';
	}
	p = &str[i];
	while (*p != '\0')
	{
		q++;
		p++;
	}
	return *q;
}