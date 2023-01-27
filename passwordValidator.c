#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	for(int curr = 1; curr < argc; curr++)
		printf("%s\n", argv[curr]);
	return 0;
}
