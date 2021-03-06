// Function to convert a string to an integer with negative sign too


#include <stdio.h>

int strToInt (const char string[])
{
	int i, intValue, result = 0;

	int j = 0;
	int sign = 1;

	if ( string [0] == '-' )
	{
		j = 1;
		sign = -1;
	}
	
	for ( i = 0 + j; string[i] >= '0' && string[i] <= '9'; ++i )
	{
		intValue = string[i] - '0';
		result = result * 10 + intValue;
	}

	result *= sign;

	return result;
}


int main (void)
{
	int strToInt (const char string[]);

	printf ("%i\n", strToInt("-245"));
	printf ("%i\n", strToInt("-100") + 25);
	printf ("%i\n", strToInt("13x5"));

	return 0;
}

	
