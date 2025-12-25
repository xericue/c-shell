#include "shell.h"

char *get_line(void);

int main(int argc, char *argv[]) 
{
    // so apparently we need to divide the argv vector into a bunch of tokens
    // and then parse that and then execute with execvp 

    // THREE MAIN COMPONENTS TO A SHELL
    // 1. infinite loop that keeps asking the user for input until swayed away
    // 2. tokenization of input string
    // 3. logic that actually runs the commands (often involves creating a child process and execvp to execute it)

    char *line;
    // pointer to an address in memory of declared as "line"

    // read, parse, execute, loop (or read evaluate print loop) - REPL
    // infinite loop
    while (1) {
        // 1. get line

        stream = fopen(argv[1], "r");
        line = get_line(); // TODO

        

        // 2. get tokens
        // 3. execute dat



        if 
    }


	if (fork() == 0) {
		execvp(argv[1], argv + 1);
	}

	wait(&status);

    return EXIT_SUCCESS;
}
