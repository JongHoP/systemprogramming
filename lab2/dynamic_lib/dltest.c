#include <stdio.h>
#include <dlfcn.h>

int main(){
	
	void *handle;
	int (*add)(int, int), (*substract)(int, int), (*divide)(int, int), (*multiply)(int, int)
	char *error;

	handle = dlopen ("./sources/libtest.so", RTLD_LAZY);
	if(!handle) {
		fputs(dlerror(), stderr);
		exit(1);
	}

	add = dlsym(handle, "add");

	if((error = dlerror()) != NULL) {
		fprintf(stderr, "%s", error);
		exit(1);
	}
	
	substract = dlsym(handle, "substract");

	if((error = dlerror()) != NULL) {
		fprintf(stderr, "%s", error);
		exit(1);
	}

	divide = dlsym(handle, "divide");

	if((error = dlerror()) != NULL) {
		fprintf(stderr, "%s", error);
		exit(1);
	}
	
	multiply = dlsym(handle, "multiply");
	if(error = dlerror()) != NULL) {

		fprintf(stderr, "%s", error);
		exit(1);
	}
	
	printf("ADD(8,4): %s"); (*add)(8,4);
	printf("SUBTRACT(8,4): "); subtract(8,4);
	printf("MULTIPLY(8,4): "); multiply(8,4);
	printf("DIVIDE(8,4): "); divide(8,4);


