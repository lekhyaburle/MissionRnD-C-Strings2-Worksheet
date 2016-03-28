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
	char *str1, *str2;;
	int temp = 20;
	str1 = (char *)malloc(sizeof(char *)*temp); str2 = (char *)malloc(sizeof(char *)*temp);
	str1 = strtok(str, "");
	while (str1 != NULL)
	{
		str2 = str1;
		str1 = strtok(NULL, "");
	}
	return str2;
}
