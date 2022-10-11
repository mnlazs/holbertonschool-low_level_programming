#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *
 *
 */

char *_strdup(char *str)
{
	int i;
	int len;
	char *newstr;

	len = strlen(str);
	newstr =(char *)malloc(len + 1);
	for (i=0; i<len; i++)
	{
		newstr[i]= str[i];

	}
	
	return (newstr);

}
