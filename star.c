#include "star.h"

char *star_read_line(void)
{
    char *buf = NULL;
    size_t bufsize = 0;

    if (getline(&buf, &bufsize, stdin) == -1)
    {
        if (feof(stdin))
        {
            p(RED "[EOF]" RST "\n");
        }
        else
        {
            p(RED "GETLINE FAILED!" RST "\n");
        }
        free(buf); // Free the buffer in case of error
        return NULL;
    }

    return buf;
}

int main(void)
{
    char *line;

    while (1)
    {
        // 1) Get line
        p(Y "Enter command: " RST);
        line = star_read_line();

        if (line == NULL)
        {
            break; // Exit on EOF or error
        }

        // 2) Print the line
        p(G "You entered: " RST "%s", line);

        // 3) Free the allocated memory
        free(line);

        // 4) Get tokens (to be implemented)
        // tokenize(line);
    }

    p(C "Exiting shell..." RST "\n");
    return EXIT_SUCCESS;
}
