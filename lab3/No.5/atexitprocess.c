/* atexit example */
/* programmer is set an exit routine. */

#include <stdio.h>
#include <stdlib.h>

void exitfunc1(void);
void exitfunc2(void);

int main() {

	atexit(exitfunc1);
	atexit(exitfunc2);
	printf("This is main function.\n");
}

void exitfunc1(void) {
	printf("This is exitfunc1.\n");
}

void exitfunc2(void) {
	printf("This is exitfunc2.\n");

}
