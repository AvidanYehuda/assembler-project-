#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 80

enum {FALSE, TRUE};

char line[MAX_LINE] = "";
int lineNum = 1;

char* getLine(FILE* file_name); /* function to get a line from file */

void parsing (FILE* file_name)
{
	char buffer[MAX_LINE] = "";
	
	strcpy(buffer, getLine(file_name));
	puts(buffer);
	
	parsing(file_name);
	
}

char* getLine(FILE* file_name)
{
	strcpy(line, "");
	if(feof(file_name))
	{
		printf("End of the compiler\n");
		exit(0);
	}
	fgets(line, MAX_LINE+2, file_name);
	
	if(isEmpty(line))
	{
		printf("ERROR - the line is empty or ';' sign\n");
		getLine(file_name);
	}
	else
	{
		printf("line number: %d\n", lineNum);
		lineNum++;
		return line;
	}
}

/* utility-פונקציות עזר*/
int isEmpty(char* line)
{
	while(*line != '\0' && *line != ';')
	{
		if(!isspace(*line))
			return FALSE;
		line++;
	}
	return TRUE;
}
