#include <stdio.h>

// Define macro function COMMAND
#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command

// Define macro function DEFINE_COMMAND
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void)

// Define macro functions for external and internal command declarations
#define DEFINE_EXTERNAL_COMMAND(NAME) \
    DEFINE_COMMAND(NAME, external);   \
    void external_##NAME##_command(void)
#define DEFINE_INTERNAL_COMMAND(NAME) \
    DEFINE_COMMAND(NAME, internal);   \
    void internal_##NAME##_command(void)

// Define macro function to call function defined using DEFINE_COMMAND
#define CALL_COMMAND(NAME, TYPE) COMMAND(NAME, TYPE)()

// Define macro functions to call functions defined using DEFINE_EXTERNAL_COMMAND and DEFINE_INTERNAL_COMMAND
#define CALL_INTERNAL_COMMAND(NAME) CALL_COMMAND(NAME, internal)
#define CALL_EXTERNAL_COMMAND(NAME) CALL_COMMAND(NAME, external)

// External commands
DEFINE_EXTERNAL_COMMAND(delete)
{
    printf("Deleting...\n");
}

// Internal commands
DEFINE_INTERNAL_COMMAND(print)
{
    printf("Printing...\n");
}

int main()
{
    // Call external and internal commands
    CALL_EXTERNAL_COMMAND(delete); // calls external_delete_command()
    CALL_INTERNAL_COMMAND(print);  // calls internal_print_command()

    return 0;
}
