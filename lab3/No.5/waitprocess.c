/*wait example*/

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	
	pid_t pid;
	int status, exit_status;
	
	if ((pid = fork()) < 0){
		perror ("fork failed");
	}
	
	if(pid == 0) {
		printf("stop 4 seconds\n");
		sleep(4); // stop 4seconds
		exit(5); // exit not complete
	}
	
	if((pid = wait(&status)) == -1) {
		perror("wait failed");
		exit(2);
	}
	
	if(WIFEXITED(status)) {
		exit_status = WEXITSTATUS(status);
		printf("Exit status from %d was %d \n", pid, exit_status);
	}
	
	exit(0);

}
		
