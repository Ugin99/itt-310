#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
* Swap 1 method with scalars: Why does this not work?
* This doesn't work because swap1 is only swapping variables inside itself which is void. Which means nothing will output adn can be used by the rest of the code.
*/
void swap1(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

/*
* Swap 2 method with pointers: Why does this work?
* This works because pointers are "pointing" to a specific allocation of memory. This allows you to change the value of the initial variable at the location instead of passing the value and needing to bringing it back.
*/
void swap2(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/*
* Play Pointer method: Don't forget to clean up your malloc!
*/
char* playPointer(char* input)
{
	// Allocate memory to hold a copy of the input array, copy input to it, and return a pointer to the new array
	// Discussion: How does strcpy_s() make your code more secure?
	// It can stop buffer overflow from attackers.
	// Discussion: How does strcpy_s() demonstrate defensive coding?
	// Creates extra measures that can stop well known attacks from occuring and just makes the code more secure in general.
	// Discussion: Look up strncpy() and compare this to the functionality provided by strcpy_s()?
	// strncopy() is similiar to strcpy_s() but strncopy() does not guarantee that the destination string will be NULL terminated
	char* name = malloc(strlen(input) + 1);
	strcpy_s(name, strlen(input)+1, input);
	return name;
}

int main(int argc, char argv[])
{
	char results[10] = "Anarbol";

	playPointer(results);
	printf("the value of results is: %s", results);
}