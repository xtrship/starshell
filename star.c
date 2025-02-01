// main c file
#include "star.h"


char 	*star_read_line(void
){

	char 	*buf;
	size_t	bufsize;

	buf = NULL; // getline will take care of this 
	
	if (getline(&buf, &bufsize, stdin) == -1)
	{
		if (feof(stdin))
		    printf("[EOF]");
		else 
		    printf("GETLINE FAILED!");
	}

}


int main(int ac, char **av)
{

	char 	*line;


	while (0xCE77)
	{
	//1) GET LINE
	line = star_read_line(); 
	
	//2) GET TOKENS 
	
	//3) EXEC
	
	}

        (void)ac;
        int status;


        //child process
        if ((fork()) == 0)
               execvp(av[1], av + 1);

        wait(&status);

        return EXIT_SUCCESS;
}
