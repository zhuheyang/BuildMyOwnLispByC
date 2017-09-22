#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <editline/readline.h>
// #include <editline/history.h>
int main(int argc, char** argv) {
	
	puts("Lispy Version 0.1");
    puts("Press Ctrl+c to Exit\n");
	char prompt[]= "Lispy Version 0.1";
	
	//this loop print the string prompt
	for (int i = 0; i < strlen(prompt); ++i)
	{
		printf("%c",prompt[i]);
	}
	printf("\n");

	//fputs print it again
	fputs(prompt, stdout);

	static char input[2048];
	fgets(input, 2048, stdin);
	printf ("%s\n",input);
	return 0;
}

