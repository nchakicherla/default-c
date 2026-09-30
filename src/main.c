#include <stdio.h>
#include <stdlib.h>
#include <stdalign.h>

#include "arena.h"

int main(void) {
	Arena scratch;
	arena_init(&scratch);

	printf("test\n");

	arena_term(&scratch);
	return 0;
}