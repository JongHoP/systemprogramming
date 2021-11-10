/*chech zombie process*/
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){
	pid_t pid;
	if((pid = fork()) < 0) {
		perror("folk");
		exit(1);
	}
	
	else if(pid == 0){
		printf("child");
		exit(0);
	}
	
	sleep(4);
	system(" ps o pid,ppid,state,tty,command");
	exit(0);
}
