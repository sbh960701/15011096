#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
	pid_t pid;
	int status;

	pid = fork();
	if (pid < 0) {perror("fork error: ");} //error control
	else if (pid == 0) { //child process
		printf("Child PID is %d, Parent PID is %d\n", getpid(), getppid());
		exit(0);
	}
	else { //parent process
		wait(&status); //wait child process
		printf("Parent PID is %d\n", getpid());
	}

	exit(EXIT_SUCCESS);
}

