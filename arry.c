#include <stdio.h>
#include <stdlib.h>
int main()
{
	char **p;
	//p = "manojkumar";
	**p = (char **)malloc(100);
	for (int i=0; i<100;i++)
		scanf("%s", (*(p+i)));
	printf("%s\n", p);
	return 0; 
}
