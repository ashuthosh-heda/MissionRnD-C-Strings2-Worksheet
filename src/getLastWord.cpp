/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	if (str == NULL)
		return NULL;

	char *lastWord = (char*)calloc(20, sizeof(char));
	int k = 0, i, j = 0;

	for (i = 1; str[i] != '\0'; i++){
		if(str[i] != ' ' && str[i-1] == ' '){
			j = i;
		}
	}

	if (str[j] != ' ')
		for (k = 0; k < i; k++){
			if (str[j] == ' ')
				break;
			lastWord[k] = str[j++];
		}

	lastWord[k] = '\0';
	return lastWord;
}
