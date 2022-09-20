#include <stdio.h>
#include "compiler.h"

int main()
{
    int res = compile_file("./test.c", "./test", 0);

    if(res == COMPILER_FILE_COMPILED_OK)
    {
        printf("Compiled Successfully\n");
    }
    else if(res == COMPILER_FAILED_WITH_ERRORS)
    {
        printf("Compiler Failed\n");
    }
    else
    {
        printf("Unknown Response From Compiler\n");
    }
    return 0;
}