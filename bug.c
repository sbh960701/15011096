#include <stdio.h>
#include <string.h>

int main(void) {
	int i;
	double j;
	char *bug = NULL;

	for(i = 0; i < 5; i++) {
		printf("loop %d: ", i);
		j = i/2 + i;
		printf("\tj is %lf \n", j);
	}

	strcpy(bug, "hi");
	printf("bug is %s \n", bug);

	return 0;
}
