/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str,int afterdecimal){
	int position = 0, num, i, temp, count, negative = 0;
	if (number < 0)
	{
		negative = 1;
		str[0] = '-';
		position = 1;
		number = number*(-1);
	}
	for (i = 0; i<afterdecimal; i++, number = number * 10);
	for (count = 0; (0 - number) <= -1; count++, number = number / 10);
	str[count+ afterdecimal] = '\0';
	i = count;
	for (; i >= 0; i--,position++)
	{
		if (position == count - afterdecimal && negative == 0)
		{
			str[position] = '.';
			i++;
			continue;
		}
		else if (position==count-afterdecimal+1 && negative ==1)
		{
			str[position] = '.';
			i++;
			continue;
		}
		number = number * 10;
		temp = (int)number;
		str[position] = temp+'0';
		number = number - temp;
		/*str[i] = number / 10;
		number = number / 10;
		number = number - number / 10;
		number = number - (((int)(number))%10);
		if (i == afterdecimal - 1)
		{
			str[i + 1] = '.';
			i++;
		}*/
	}
}
