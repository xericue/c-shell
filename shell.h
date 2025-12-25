#ifndef SHELL_H
# define SHELL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>

#define Y "\033[1;33m"
#define G "\033[1;32m"
#define C "\033[1;36m"
#define RED "\033[1;31m"
#define RST "\033[0m"

char *get_line(void) {
    // so getline stores the address of what was read from "stream" into line
    // line is called a "buffer"
    // size_t n is the size of the buffer

    // all of them are pointers because we actually want to change the value of each of the passed in
    // variables - not just work with a copy of each of them
    char *buffer; // character pointer
    size_t bufsize; // "unsigned integer" type/guaranteed to be big enough to store size
    // of any object in memory in bytes    

    buffer = NULL; // getline "will take care of it"

    // getline is gonna return the number of characters written excluding NUL terminator

    // &buffer = address of buffer variable
    if (getline(&buffer, &bufsize, stdin) == -1) // error handling
    {
        if (feof(stdin)) {
            printf("[EOF]");
        }

        else {
            printf("Getline failed");
        }
    }
    return 
}

#endif
