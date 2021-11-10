/*exit example*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int exit_status;

	printf("return 0 is exit complete.\n");
	printf("return 0 != is exit not complete.\n");
	printf("max exit status is 256.\n");
	printf("enter exit status: ");
	scanf("%d", &exit_status);
	exit(exit_status);
	

}
