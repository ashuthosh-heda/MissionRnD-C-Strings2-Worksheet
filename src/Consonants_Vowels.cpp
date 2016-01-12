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


void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	*consonants = 0;
	*vowels = 0;
	int i, ch;

	if (str == "")
		return;
	
	if (str == NULL)
		return;

	for (i = 0; str[i] != '\0'; i++){
		ch = (int)str[i];
		if (ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85 ||
			ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117)
			(*vowels)++;
		else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
			(*consonants)++;
	}

}
