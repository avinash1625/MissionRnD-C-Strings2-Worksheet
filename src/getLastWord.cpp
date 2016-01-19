/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	char *last_word = (char*)malloc(sizeof(char)* 20);
	int j = 0, i = 0, k = -1;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			k = i + 1;
		i++;
	}
	if (k == -1)
	{
		if (str[0] == ' ')
			last_word[j] = '\0';
		else
			return str;
	}
	else
	{
		while (str[k] != '\0' && str[k] != ' ')
		{
			last_word[j] = str[k];
			k++;
			j++;
		}
		last_word[j] = '\0';
	}
	return last_word;
}
