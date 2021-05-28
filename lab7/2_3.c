#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int pid = 0;
  for(int p = 0; p < 10; p++) 
  {
	pid = fork();
	if (pid == 0) break;
 }

  if (pid == 0) {
	int childPID = getpid();
	int parentPID = getppid();
   	printf("Children process PID: %d\n"
		"Parent process PID: %d\n", childPID, parentPID);
	sleep(2);
  } else if (pid > 0) 
  {
    	printf("Parent process \n"
           	"PID of the process:  %d\n", pid);
	sleep(2);
  }
  return 0;
}
