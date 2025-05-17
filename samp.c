
#include <stdio.h>

// vowel or not 
int main()
{//check it 
	char ch = 'A';
	if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'
		|| ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
		|| ch == 'u' || ch == 'U') {

		printf("The character %c is a vowel.\n", ch);
	}
	else {
		printf("The character %c is a consonant.\n", ch);
	}
//done 
	return 0;
}
