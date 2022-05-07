#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

void main()
{
	char cmd[100];
	pid_t fake_shell_pid, copied_shell_pid;
	int status;
	//fake shell_pid = for();
	while(1){
		printf("\noslab@scu:$ Enter a command:");
		scanf("%s",cmd);
		//gets(cmd)
		printf("Original shell PID: %d\n",getpid());
		copied_shell_pid = fork();
		if(copied_shell_pid < 0) //Failed fork()
			printf("Faild to runn the command.\n");
		else if(copied_shell_pid > 0) //Parent process
			waitpid(-1, &status, 0); //wait for any child process
		else //Child process
		{
			printf("Coped shell PID: %d\n", getpid());
			char *args[] = {cmd,NULL};
			execvp(args[0],args); //Changing the image of the process to that of the command enterd
		}
	}
}