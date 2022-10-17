#include <stdio.h>
/**
 * main -serves as the entry point for the program.
 * the program prints the various sizes of data types.
 * Return: return zero.
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", Sizeof(char));
	printf("Size of an int: %ld byte(s)\n", Sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", Sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", Sizeof(long long int));
	printf("Size of a float: %ld bytes(s)\n", Sizeof(float));
	return (0);
}
