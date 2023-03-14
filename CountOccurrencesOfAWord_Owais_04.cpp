/*
Program : C++ program to find the number of occurrences of a word in a sentence.
*/

#include <iostream>
#include <string.h>

using namespace std;

int CountOccurrences(char* str, char* word)
{
	int j, count = 0;
	int strLen  = strlen(str);
	int wordLen = strlen(word);

	for(int i=0; i <= strLen; i++)
	{
		for(j=0; j< wordLen; j++)
		{
			if(str[i + j] != word[j])
			{
				break;
			}
		}

		if(j == wordLen)
		{
            count++;
		}
	}
	return count;
}

int main()
{
	char sentence[] = "Programming is fun";
    char word[] = "fun";
	cout << " Number of occurrences of the entered word in the sentence = " << CountOccurrences(sentence, word);
	return 0;
}