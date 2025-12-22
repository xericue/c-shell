#ifndef SHELL_H
# define SHELL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>

char *get_line(char *line, size_t *n, FILE *stream) {
    // so getline stores the address of what was read from "stream" into line
    // line is called a "buffer"
    // size_t n is the size of the buffer

    // all of them are pointers because we actually want to change the value of each of the passed in
    // variables - not just work with a copy of each of them

    


    return 
}

#endif
