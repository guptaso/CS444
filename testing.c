#include <stdio.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <stdlib.h>


int main() {
	char* test = malloc(256); 
	long used = (long)syscall(359);
	long free = (long)syscall(360);
	printf("used: %ld, free: %ld\n", used, free);

	char* test2 = malloc(456); 
	used = (long)syscall(359);
	free = (long)syscall(360);
	printf("used: %ld, free: %ld\n", used, free);
	return 0;
}
