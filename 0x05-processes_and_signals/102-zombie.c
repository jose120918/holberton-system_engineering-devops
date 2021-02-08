#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

/**
* infinite_while - infinite
* Return: always 0
**/
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
* main - entry point
* Return: 0
**/
int main(void)
{
	int i;
	pid_t child_pid;

	for (i = 0; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid > 0)
		{}
		else
		{
			exit(0);
		}
		printf("Zombie process created, PID: %i\n", child_pid);
	}
	infinite_while();
	return (0);
}
