#include "star.h"


char 	*star_read_line(void)
{

	char 	*buf;
	size_t	bufsize;

	buf = NULL; // getline will take care of this 
	
	if (getline(&buf, &bufsize, stdin) == -1)
	{
		if (feof(stdin))
		    p(RED"[EOF]"RST);
		else 
		    p(RED"GETLINE FAILED!"RST);

		p("%s\n", buf);
	}

	return buf;
}


int main(int ac, char **av)
{

	char 	*line;


	while (0xCE77)
	{
	//1) GET LINE
	line = star_read_line(); 
	p("%s\n", line);
	pause();


	//2) GET TOKENS 
	
	//3) GET TOKENS
	
	}

	return EXIT_SUCCESS;
}
