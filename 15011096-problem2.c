#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
	pid_t pid;
	int status;

	pid = fork();
	if (pid < 0) {perror("fork error: ");} //error control
	else if (pid == 0) { //child proess
		execl("/bin/ls", "ls", NULL);
		//'ls' execution
		//child process make new process using 'exec'
	}
	else { //parent process
		wait(&status); //wait child process
	}
	
	exit(EXIT_SUCCESS);
}
