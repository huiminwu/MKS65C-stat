#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char * str = malloc(sizeof(*str));
	char * path = "huck.txt";

	struct stat * buff = malloc(sizeof(struct stat));

	stat(path, buff);

	printf("\n");
    printf("Information on %s:\n\n", path);
	printf("Size:                %ld\n"  , buff->st_size);
	printf("Permissions:         %o\n"   , buff->st_mode);	
	printf("Time of Last Access: %ld\n"  , buff->st_atime);
	printf("\n");

    long size = buff->st_size;
    if(size > 1000000000) {
        sprintf(str, "%f", size / 1000000000.0);
        printf("%s GB\n", str);
    } else if (size > 1000000) {
        sprintf(str, "%f", size / 1000000.0);
        printf("%s MB\n", str);
    } else if (size > 1000) {
        sprintf(str, "%f", size / 1000.0);
        printf("%s KB\n", str);
    } else {
        sprintf(str, "%ld", size);
        printf("%s B\n", str);
    }
	return 0;
}
