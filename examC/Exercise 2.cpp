#include <stdio.h>
#include <string.h>

int main() {
	char str[25] ;
	
	printf("Enter string: ");
	gets(str);
	int lengthStr = strlen(str);
	char tmp;
	printf("String %s ", str);
	for (int i = 0; i < lengthStr - 1; i++) {
		for (int j = i+1; j < lengthStr; j++) {
			if (str[i] > str[j]) {
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
		}
	}
	printf("after sorting alphabetically will have the result: %s", str);
	return 0;
}
