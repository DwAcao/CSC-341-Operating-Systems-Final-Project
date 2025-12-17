/*
    # After building custom bash in ~/bash-project/bash-src/
    cd ~/bash-project
    gcc -shared -o cpuhog.so cpuhog.c -I bash-src -I bash-src/builtins -I bash-src/include

    # Test
    ~/bash-custom/bin/bash --init-file <(echo 'enable -f ~/bash-project/cpuhog.so cpuhog') -c 'cpuhog'
*/
#include <config.h>
#include <stdio.h>
#include "builtins.h"
#include "shell.h"

int cpuhog_builtin(WORD_LIST *list)
{
    printf("Starting CPU stress test...\n");
    volatile unsigned long long x = 0;
    for (int i = 0; i < 100000000; i++)
    {
        x += i;
    }
    printf("CPU hog complete. Sum: %llu\n", x);
    return EXECUTION_SUCCESS;
}

char *cpuhog_doc[] = {
    "cpuhog - stress CPU for scheduling tests",
    (char *)NULL};

struct builtin cpuhog_struct = {
    "cpuhog",
    cpuhog_builtin,
    BUILTIN_ENABLED,
    cpuhog_doc,
    "cpuhog",
    0};
