#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct symbolNode {
 	int value;
	char* symbol;
	struct attributeNode* attributes;
    	struct symbolNode * next;
} symbolNode;

typedef struct attributeNode{
	char* attribute; /*should be enum */
	struct attributeNode * next;
} attributeNode;

int main()
{
	symbolNode * head = NULL;
	head = (symbolNode *) malloc(sizeof(symbolNode));
	if (head == NULL) 
	{
    		return 1;
	}
	else 
	{
		(*head).value =3;
		head->next= NULL;
		printf("the num is %d", head->value);
	}
	return 0;
}	
