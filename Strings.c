#include <stdio.h>

int main(int argc, char *argv[])
{
	char stringArray[] = {"Reverse The Case Of This String.\n"};
	char stringChanged[sizeof(stringArray)];
	
	printf("Original String: %s",stringArray);
	
	//Code to change uppercase to lowercase and vice versa goes here
	
	
	//Print modified string
	printf("Modified String: %s",stringChanged);
	
	return 0;
}