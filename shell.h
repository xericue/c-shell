#ifndef SHELL_H
# define SHELL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>

#define Y "\033[1;33m"
#define G "\033[1;32m"
#define C "\033[1;36m"
#define MAG "\033[1;35m"
#define RED "\033[1;31m"
#define RST "\033[0m"

// all terminal control sequences 
// i.e. \033[0m is to "reset special formatting"

#define p(...) printf(__VA_ARGS__)
// shortcut for printing stuff

void char *Getcwd(char *buffer, size_t size) {
    // pointer to pathname is returned to getcwd, NULL otherwose
    if (NULL = getcwd(buffer, size)) {
        perror(RED"getcwd failed"RST);
    }
}

char *get_line(void) {
    char *buffer; // character pointer
    size_t bufsize;
    char current_working_directory[BUFSIZ]; //bufsiz is like 1 kb macro

    buffer = NULL; // getline "will take care of it"

    Getcwd(cwd, sizeof(cwd));

    // "are we interactive mode" or is this a script
    // if (isatty(fileno(stdin))) {}

    p("$<YEAAAAAAAAAAAAAAAAA> %s dsfjsdfshdfhs", buffer);


    // getline is gonna return the number of characters written excluding NUL terminator

    // &buffer = address of buffer variable
    if (getline(&buffer, &bufsize, stdin) == -1) // error handling
    {
        buffer = NULL; // printing NULL is causing a seg fault here since its a ptr to an empty string here
        if (feof(stdin))
            p(RED"[EOF]"RST);

        else
            p(RED"Getline failed"RST);
    }
    return buffer;
}

#endif
