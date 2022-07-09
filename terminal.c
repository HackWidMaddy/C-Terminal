#include <stdio.h>
#include <string.h>
#include <time.h>
#include <process.h>
#include <dir.h>
#include <conio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int check;

  char Input[20];
  char filename[20];
  FILE *f;
  char s;
  char websitename[20];
  char echo[20];
  char path[50];
  int a;
  char dirname[20];

above:
  while (1)
  {

    printf("Linux@localhost# ");
    scanf("%s", Input);

    if (strcmp("exit", Input) == 0)
    {
      exit(1);

    }
    else if (strcmp("ifconfig", Input) == 0)
    {

      system("C:\\Windows\\System32\\ipconfig > ifconfig.txt");
      f = fopen("ifconfig.txt", "r");
      while ((s = fgetc(f)) != EOF)
      {
        printf("%c", s);
      }
      fclose(f);
    }
    else if (strcmp("tdy", Input) == 0)
    {
      time_t t;
      time(&t);

      printf(" %s ", ctime(&t));
    }
    else if (strcmp("cls", Input) == 0)
    {
      system("cls");
    }
    else if (strcmp("cls", Input) == 0)
    {
      system("cls");
    }
    else if (strcmp("echo", Input) == 0)
    {
      gets(echo);
      puts(echo);
    }
    else if (strcmp("mkdir", Input) == 0)
    {
      gets(dirname);
      check = mkdir(dirname);
      if (!check)
      {
        printf("Directory created\n");
      }
      else
      {
        printf("directory not created");
      }
    }

    else if (strcmp("rmdir", Input) == 0)
    {

      gets(dirname);
      check = rmdir(dirname);

      if (!check)
      {
        printf("Directory Deleted \n");
      }
      else
      {
        printf("Directory Not Deleted \n");
        exit(1);
      }
    }
    
  
  }
  goto above;
  return 0;
}
