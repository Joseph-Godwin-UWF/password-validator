#include <stdio.h>
#include <stdlib.h>
#define COMMAND_LINE_ARGS 2
#define MAXIMUM_LENGTH 50

/* Argv[1] is password filename */

void removeNewLineFromCString(char*);

int main(int argc, char *argv[]){
	
	FILE *fp;
	fp = fopen(argv[1], "r");
	if(fp == NULL) {
		printf("ERROR OPENING FILE\n");
		return -1;
	}

	char line[MAXIMUM_LENGTH];
	while( fgets(line, sizeof line, fp) != NULL ){
		removeNewLineFromCString(line);
		printf("%s\n", line);
	}

	fclose(fp);
	return 0;
}

void removeNewLineFromCString(char *ch){
	while(*ch != '\0'){
		if(*ch == '\n'){
			*ch = '\0';
		}
		ch++;
	}
	return;
}
