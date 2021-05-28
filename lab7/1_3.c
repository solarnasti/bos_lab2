#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  int count = 0;
  char **p;
  for (p = environ; (*p != NULL && count < 10); p++) 
  { 
    printf("Number of environment variables №%d : %s\n",count,*p);
    count++;
  }
}

