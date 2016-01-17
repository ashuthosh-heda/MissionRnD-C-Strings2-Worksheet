/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	if (str == NULL || word == NULL)
		return NULL;

	int count = 0;
	int i, j, k;
	for (i = 0; str[i] != '\0'; i++){
		j = 0;
		if (str[i] == word[j]){
			for (j = i, k = 0; word[k] != '\0'; k++, j++)
				if (str[j] != word[k])
					break;
			if (word[k] == '\0')
				count++;
		}
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

