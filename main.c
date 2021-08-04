#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void parsing(FILE*);

int main(int argc, char *argv[])
{
	char str[20]; 
	int i,j;
	FILE* file_name;
	long ic = 100, dc =0;
	
	if (argc == 1)
	{
		printf("no arguments only program name\n");
	}
	else
	{
		for (j=1; j<argc; j++)
		{	
			strcpy(str,argv[j]); /* str - gets the file name from the argv */
			
			/* check if the file name ends with .as */	
  			for (i=0; i<strlen(str); ++i)
  			{
  				if (str[i] == '.')
  				{
  					i++;
  					if (str[i]=='a' && str[i+1] =='s')
  					{
  						/* open the file by his name */
  						if ((file_name = fopen(str,"r")) == NULL)
  						{
  							printf("Cannot open the file \n");
  						}
  						else
  						{
  							printf("file opened \n");
  							
  						}
  					}
  				}
  			}
		
		}
		parsing(file_name);
	}
	return 0;
}
