//Taking a single number and outputting several calculations

#include <stdio.h>

int main (void)
{
	float d = 6.5;
	float half, square, cube;

	half = d/2;
	square = d*d;
	cube = d*d*d;

	printf("\nYour number is %.2f\n", d);
	printf("Half of it is %.2f\n", half);
	printf("Square it to get %.2f\n", square);
	printf("Cube it to get %.f\n", cube);

	return 0;
}

// program1502 > results.txt
