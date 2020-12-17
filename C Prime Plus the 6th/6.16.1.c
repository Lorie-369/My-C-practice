//÷∏’Î
#include <stdio.h>
int main(void)
{
	char* p;
	char letter[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	p = letter;
	for (int i = 0; i < 26; i++,p++)
	{
		printf("%c\t", *p);
	}
	return 0;
}