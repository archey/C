#include <stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Tyler";
	char full_name[] = {
		'T', 'y', 'l', 'e', 'r',
		' ', 'S', '.', ' ',
		'B', 'e', 'n', 'n', 'e', 't', 't', '\0'
	};

	// WARNING: On some systems you may have to change the
	// %ld in this code to a %u since it will use unsigned ints
	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of the areas (int[]): %ld\n",
		sizeof(areas));
	printf("The first area is %d, the 2nd %d.\n",
		areas[0], areas[1]);

	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of a name (char[]): %ld.\n",
		sizeof(name));
	printf("The number of chars: %ld.\n",
		sizeof(name) / sizeof(char));

	printf("The size of the full name (char[]); %ld.\n",
		sizeof(full_name));
	printf("The number of chars: %ld.\n",
		sizeof(full_name) / sizeof(char));
	
	printf("name=\"%s\" and full_name=\"%s\"\n",
		name, full_name);

	return 0;

}
