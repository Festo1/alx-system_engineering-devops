/*
 * File: 102-zombie.c
 * Auth: Festo Wampamba
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * infinite_while - Run an infinite while loop.
 *
 * This function runs an infinite while loop that sleeps for 1 second
 * in each iteration. It's used to keep the program running after creating
 * zombie processes.
 *
 * Return: Always returns 0.
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - Creates five zombie processes.
 *
 * In this function, five child processes are created using fork().
 * The parent process prints information about the child processes and
 * then sleeps for 1 second before repeating the process
 * for a total of 5times.
 * The child processes immediately exit, becoming zombie processes.
 *
 * Return: Always returns EXIT_SUCCESS.
 */
int main(void)
{
	pid_t pid;
	char count = 0;

	while (count < 5)
	{
		pid = fork();
		if (pid > 0)
		{
			printf("Zombie process created, PID: %d\n", pid);
			sleep(1);
			count++;
		}
		else
			exit(0); /* Child processes exit immediately. */
	}

	infinite_while(); /* This function keeps the program running */

	return (EXIT_SUCCESS);
}
