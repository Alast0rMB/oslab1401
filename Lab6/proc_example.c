#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t pid; //Process information
	pid = fork(); //Creating a child process
	if (pid < 0) //somthing went wrong!
	{
		fprintf(stderr, "%s\n","Fork Faild");
		exit(-1);
	} 
	else if (pid == 0) //The child process
	{
		//execlp("/bin/ls","ls",NULL);
		printf("\nHello Child PID: %d started, Parent PID: %d\n",getpid(),getppid());
		sleep(90);
		printf("\nHello Child PID: %d started, Parent PID: %d\n",getpid(),getppid());
		while(1);
	}
	else //pid is referring to the PID of the child 
	{
		wait(NULL);
		printf("%s\n","Child Complete");
		exit(0);
	}
}