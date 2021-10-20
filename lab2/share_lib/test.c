#include <stdio.h>

#include "mylib.h"

 

int main(void)

{

	int result = 0;

	result = add(5,6);

	printf("%d\n",result);

	result = 0;


	result = sub(10,4);

	printf("%d\n",result);

	test3();

	return 0;

 

}
