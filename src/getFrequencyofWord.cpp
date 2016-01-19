/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int strlen(char *str)
{
	int i;
	for (i = 0; str[i]; i++);
	return i;
}

int str_cmp(char *str1, int i,int j, char *str2)
{
		int k = 0, flag = 1;
		if (j - i + 1 != strlen(str2))
			return 0;
		while (str1[i] != '\0' && str2[k] != '\0')
		{
			if (str1[i] != str2[k])
			{
				flag= 0;
				break;
			}
			k++;
			i++;
		}
		return flag;
}

int count_word_in_str_way_1(char *str, char *word)
{
		int count = 0, i = 0, len = strlen(word);
		while (str[i] != '\0')
		{
			if (str[i] == word[0]&&str[i+len-1]==word[len-1])
			{
				if (str_cmp(str, i,i+len-1, word) == 1)
					count++;
			}
			i++;
		}
		return count;
}


int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

