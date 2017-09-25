//Fullname: Zhasulan Serikov
//Group: 3EN04D

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>


int main(int argc, char *argv[]) {

	float a;
	//  argc = 2 if only 1.57 and argc =3 if -c 1.57
	if (argc == 1){  // if argc contain only 1(just path of file) then user didn't pass any option and/or value
		printf("%s\n", "You have to at least enter number to convert to sine/cosine\n"
			"Also you can get only sine by -s option, cosine by -c option"
			"\nex: ./sincos 1.57 or sincos -c 1.57 or sincos -s 1.57");
	}
	else if (argc == 2) { // if argc  2 then there path and value(ex:1.57) 
		a = atof(argv[1]);
		printf("%f\n", sin(a));
		printf("%f\n", cos(a));
	}
	else if (argc == 3){ // argc = 3  here we have in argv path, option(ex:-c, -s) and value(ex:1.57)
		if (strcmp(argv[1], "-c") == 0){
			a = atof(argv[2]);
			printf("%f\n", cos(a));
		}
		else if (strcmp(argv[1], "-s") == 0){
			a = atof(argv[2]);
			printf("%f\n", sin(a));
		}
	}

    return 0;
}
