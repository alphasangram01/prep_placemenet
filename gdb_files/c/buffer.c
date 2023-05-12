#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char** argv)
{
	volatile int cantoverflowme;
	char buffer[64];

	cantoverflowme = 0;
	gets(buffer);

	if (cantoverflowme != 0) {
		printf("You OVERFLOW'ed Me\n");
	}
	else {
		printf("Can't Overflow Me\n");
	}
}
