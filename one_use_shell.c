#include "one_use_shell.h"

int main(int argc, char *argv[]) 
{
	// main process calls fork()
	(void)argc; // typecast argc variable to void to tell compiler that argc is unused
	int status;

	// this is a child process/fork() creates a child 
	if (fork() == 0) {
		// fork() - a process creates a copy of itself
		// its a system call - a program's asking of its operating system for a "service" (here, forking)	
		
			
		// this execvp replaces the current "process image" (snapshot of a program's state at this current moment)
		// with a new process image
		// execute vector path - takes an array (vector) of arguments and then uses PATH to find the executable
		// i.e. its actually Digging in my computer/PATH and creating a new executable/process image
		//
		// execvp ls - the actual executable that i wanna launch - 
		// and pass in "argv" which contains the elements that i want
		execvp(argv[1], argv + 1);
	}

	wait(&status);

    return EXIT_SUCCESS; // macro from stdlib.h which is just 0
}
