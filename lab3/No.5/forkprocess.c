/*forkprocess.c*/
/*fork example*/

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main() {
	pid_t pid;
	
	printf("Calling fork \n");
	pid = fork(); // make new process 
	//fork는 자식프로세스를 만들기 위해서 사용되는 프로세스 생성기이다.
	printf("pid's return is %d\n", pid);	

	if(pid == 0){

		printf("I'm the child process. I'm return 0\n");
	}
	
	else if (pid > 0) {
		
		printf("I'm the parent process. I'm return child's PID\n");
	}
	
	else{
		printf("fork falied\n");
	}
}
		
