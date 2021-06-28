#include <stdio.h>
#include "Header1.h"
#include <string.h>

int main (){
	char line[256] = { 0 };
	printf("Hello, Git!");
	scanf("%s", line);
	while (!strcmp(line, "Hello")){
		PrintHello();
		scanf("%s", line);
	}
	return 0;
}