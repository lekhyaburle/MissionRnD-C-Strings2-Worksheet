/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<string.h>

char * get_last_word(char * str){
	if (str==NULL)
	return NULL;
	char *str1;
	int n=0,i,j=0;
	while (str[n] != '\0')
	{
		n++;
	}
	i = n;
	str1 = (char *)malloc(sizeof(char *)*n);
	for (i = n; i > 0; i--)
	{
		if (str[i] == ' ')
		{
			i++;
			while (str[i] != '\0')
			{
				str1[j] = str[i];
				j++;
				i++;
			}
			break;
		}
	}
	str1[j] = '\0';
	return str1;
}
