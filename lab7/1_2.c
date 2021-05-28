#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  int count;
  char **p;
  for (p = environ; *p != NULL; p++)
    count++;
  printf("Number of environment variables: %d\n", count,"Number of arguments: %d\n",argc);
}
