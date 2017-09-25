/*
Fullname: Zhasulan Serikov
Group: 3EN04D
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	
	int c;
	if ((c = getopt (argc, argv, "n:")) != -1) {  // if  there is option -n
		switch(c) {
			case 'n':
				for (int i = 2; i < argc ; i++)
				{
					printf("%s ", argv[i]);
				}
				printf("%s", argv[argc-1]);	
				break;
		}
	}
	else { // if no option -n
		for (int i = 1; i < argc ; i++)
		{
			printf("%s ", argv[i]);
		}
		printf("\n");	
	}

	
	return 0;
}
