#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {


	char * path = "happy.txt";

	struct stat * buff = malloc(sizeof(struct stat));

	stat(path, buff);

	printf("\n");
    printf("Information on %s:\n\n", path);
	printf("Size:                %ld\n"  , buff->st_size);
	printf("Permissions:         %o\n"   , buff->st_mode);	
	printf("Time of Last Access: %ld\n"  , buff->st_atime);
	printf("\n");	

	return 0;
}