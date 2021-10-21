#include <stdio.h>
#include "testlib.h"

int main(){

	printf("ADD(8,4): "); add(8,4);
	printf("SUBTRACT(8,4): "); subtract(8,4);
	printf("MULTIPLY(8,4): "); multiply(8,4);
	printf("DIVIDE(8,4): "); divide(8,4);
	printf("sharedlib"); add(0,8);
	//return 0;

}
