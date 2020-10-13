#include <stdio.h>

int main(void) {
	const int i = 10;

	for (int countdown = i; countdown > 0; countdown--) {
		printf("%d\n", countdown);		
	}
	printf("BLASTOFF!\n");
}
