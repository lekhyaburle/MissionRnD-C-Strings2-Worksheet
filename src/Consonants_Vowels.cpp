/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str, int *consonants, int *vowels){
	int i = 0, j = 0, k = 0, l = 0;
	char *str1, *str2;
	str1 = "AEIOUaeiuo";
	str2 = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
	if (str == NULL || str == ""){
		*consonants = 0;
		*vowels = 0;
	}
	else{
		while (str[k] != '\0')
		{
			l = 0;
			while (str1[l] != '\0')
			{
				if (str[k] == str1[l])
				{
					i++;
				}l++;
			}
			l = 0;
			while (str2[l] != '\0')
			{
				if (str[k] == str2[l])
				{
					j++;
				}
				l++;
			}
			k++;
		}
		*consonants = j;
		*vowels = i;
	}
}



