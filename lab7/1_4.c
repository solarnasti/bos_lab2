#include <stdio.h>

extern char **environ;
int main(int argc, char const *argv[] 
{
   int count = 0;
   char **p;
   int amount;
   sscanf(argv[1], "%d",&amount);
   for (p = environ; *p != NULL; p++)
   {
      if(count < amount) printf("%s\n", *p);
      else break;
      count++;
    }
}
